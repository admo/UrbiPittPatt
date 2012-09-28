/*
 * OpenCVCamera.h
 *
 *  Created on: 01-02-2012
 *      Author: aoleksy
 */

#ifndef OPENCVCAMERA_H_
#define OPENCVCAMERA_H_

#include <opencv/cv.h>
#include <boost/thread.hpp>

class OpenCVCamera {
public:
	OpenCVCamera(int camera);
	virtual ~OpenCVCamera();

	cv::Mat getImage();
    int getFps() const;
    void setFps(int fps);

private:
	void cameraThread(int camera);
	boost::thread mCameraThread;

	boost::condition_variable mGetImageCondition;
	boost::mutex mGetImageMutex;

	cv::Mat currentImage;
	int64 mLastTick;
	int mFps;
};

#endif /* OPENCVCAMERA_H_ */
