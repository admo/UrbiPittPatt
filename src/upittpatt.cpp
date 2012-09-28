#include <iostream>

#include <opencv/cv.h>
#include <opencv/highgui.h>

#include <boost/thread.hpp>

using namespace boost;
using namespace cv;
using namespace std;

void opencvCameraThread() {
	try {
		while (true) {
			this_thread::interruption_point();
		}
	} catch (thread_interrupted&) {
		// Wyłącz kamerę i do widzenia
	}
}

void opencvWindowThread() {

}

void pittpattDetectionThread() {
	try {
		while (true) {
			this_thread::interruption_point();
		}
	} catch (thread_interrupted&) {
		// Wyłącz kamerę i do widzenia
	}
}

int main(int argc, char* argv[]) {
	return 0;
}
