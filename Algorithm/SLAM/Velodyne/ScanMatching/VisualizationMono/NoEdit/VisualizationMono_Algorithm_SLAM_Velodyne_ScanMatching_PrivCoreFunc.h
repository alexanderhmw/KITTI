//You need not to modify this file.

/*! \defgroup VisualizationMono_Algorithm_SLAM_Velodyne_ScanMatching VisualizationMono_Algorithm_SLAM_Velodyne_ScanMatching
	\ingroup VisualizationMono_Library Algorithm_SLAM_Velodyne_ScanMatching_NodeClass
	\brief VisualizationMono_Algorithm_SLAM_Velodyne_ScanMatching defines the Algorithm_SLAM_Velodyne_ScanMatching in VisualizationMono.
*/

#ifndef VISUALIZATIONMONO_ALGORITHM_SLAM_VELODYNE_SCANMATCHING_PRIVCOREFUNC_H
#define VISUALIZATIONMONO_ALGORITHM_SLAM_VELODYNE_SCANMATCHING_PRIVCOREFUNC_H

#include<RobotSDK_Global.h>

/*! \defgroup VisualizationMono_Algorithm_SLAM_Velodyne_ScanMatching_PrivCoreFunc VisualizationMono_Algorithm_SLAM_Velodyne_ScanMatching_PrivCoreFunc
	\ingroup VisualizationMono_Algorithm_SLAM_Velodyne_ScanMatching
	\brief VisualizationMono_Algorithm_SLAM_Velodyne_ScanMatching_PrivCoreFunc defines the PrivCoreFunc in VisualizationMono_Algorithm_SLAM_Velodyne_ScanMatching.
*/

/*! \addtogroup VisualizationMono_Algorithm_SLAM_Velodyne_ScanMatching_PrivCoreFunc
	@{
*/

/*! \file VisualizationMono_Algorithm_SLAM_Velodyne_ScanMatching_PrivCoreFunc.h
	 Defines the PrivCoreFunc of VisualizationMono_Algorithm_SLAM_Velodyne_ScanMatching
*/

//*******************Please add other headers below*******************


#include "../Edit/VisualizationMono_Algorithm_SLAM_Velodyne_ScanMatching_ParamsData.h"
#include "../Edit/VisualizationMono_Algorithm_SLAM_Velodyne_ScanMatching_Vars.h"

/*! \def NODECONFIG
	\brief Forcefully defines the NodeType_NodeClass.
*/
#ifdef NODECONFIG
#undef NODECONFIG
#endif
#define NODECONFIG VisualizationMono_Algorithm_SLAM_Velodyne_ScanMatching

/*! void VisualizationMono_Algorithm_SLAM_Velodyne_ScanMatching_getPortsSize(QList<int> & inputPortsSize, int & outputPortsNumber)
	\brief [required] Function pointer type for interface function of getting node's port(s)' size.
	\param [out] inputPortsSize The size of each input port's data buffer.
	\param [out] outputPortsNumber The number of output ports.
*/
extern "C" ROBOTSDK_OUTPUT void DECOFUNC(getPortsSize)(QList<int> & inputPortsSize, int & outputPortsNumber);

/*! void VisualizationMono_Algorithm_SLAM_Velodyne_ScanMatching_initializeParams(boost::shared_ptr<void> & paramsPtr)
	\brief [required] Function pointer type for interface function of initializing node's parameters.
	\param [out] paramsPtr The parameters embelished by boost::shared_pointer<void>.
	\details To initialize parameters:
	- paramsPtr=boost::shared_ptr<void> (new ParametersType);
*/
extern "C" ROBOTSDK_OUTPUT void DECOFUNC(initializeParams)(boost::shared_ptr<void> & paramsPtr);

/*! void VisualizationMono_Algorithm_SLAM_Velodyne_ScanMatching_initializeVars(boost::shared_ptr<void> & varsPtr)
	\brief [required] Function pointer type for interface function of initializing node's variables.
	\param [out] varsPtr The variables embelished by boost::shared_pointer<void>.
	\details To initialize variables:
	- varsPtr=boost::shared_ptr<void> (new VariablesType);
*/
extern "C" ROBOTSDK_OUTPUT void DECOFUNC(initializeVars)(boost::shared_ptr<void> & varsPtr);

/*! @}*/ 

#endif