#include <iostream>
#include <opencv2/opencv.hpp>

int main() {
    // Open the default camera
    cv::VideoCapture cap(0);
    if (!cap.isOpened()) {
        std::cerr << "Error: Could not open camera." << std::endl;
        return -1;
    }

    cv::namedWindow("Camera Feed", cv::WINDOW_AUTOSIZE);

    while (true) {
        cv::Mat frame;
        // Capture frame from camera
        cap >> frame;

        // If the frame is empty, break the loop
        if (frame.empty()) break;

        // Display the frame
        cv::imshow("Camera Feed", frame);

        // Break the loop if 'ESC' key is pressed
        char c = (char)cv::waitKey(25);
        if (c == 27) break;
    }

    // Release the VideoCapture object
    cap.release();
    cv::destroyAllWindows();

    return 0;
}
