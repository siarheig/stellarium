/*
 * SensorMgr.h
 *
 *  Created on: 2012-05-01
 *      Author: siarheig
 */

#ifndef SENSORMGR_H_
#define SENSORMGR_H_

#include "StelModule.hpp"
#include "SensorEventThread.h"

class SensorMgr: public StelModule {
public:
	SensorMgr();
	virtual ~SensorMgr();

	virtual void init();
	virtual void deinit();
	virtual void update(double deltaTime);
	bool getGpsPermitted() const {return _gpsPermitted;}
	void setGpsPermitted(bool f) {_gpsPermitted=f;}

private:
	SensorEventThread* _eventThread;
	bool _gpsPermitted;
};

#endif /* SENSORMGR_H_ */
