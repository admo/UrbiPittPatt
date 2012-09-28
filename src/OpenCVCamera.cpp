/*
 * OpenCVCamera.cpp
 *
 *  Created on: 01-02-2012
 *      Author: aoleksy
 */

#include "OpenCVCamera.h"

using namespace cv;
using namespace boost;

OpenCVCamera::OpenCVCamera(int camera) {
	mCameraThread = thread(&OpenCVCamera::cameraThread, this, camera);
	mGetImageMutex.lock();
	// TODO Auto-generated constructor stub

}

OpenCVCamera::~OpenCVCamera() {
	// TODO Auto-generated destructor stub
}

Mat OpenCVCamera::getImage() {
	return Mat();
}

void OpenCVCamera::cameraThread(int camera) {
	try {
		while (true) {
			this_thread::interruption_point();
		}
	} catch (thread_interrupted&) {
		// Wyłącz kamerę i do widzenia
	}
}

int OpenCVCamera::getFps() const {
	return mFps;
}

void OpenCVCamera::setFps(int fps) {
	mFps = fps > 0 ? fps : -1;
}

