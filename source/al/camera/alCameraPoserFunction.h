#pragma once

#include "CameraPoser.h"
#include "al/actor/Placement.h"
#include "sead/math/seadVector.h"

namespace alCameraPoserFunction {

    struct CameraCollisionHitResult;

    void initCameraArrowCollider(al::CameraPoser *);
    void calcCameraPose(sead::Quat<float> *,al::CameraPoser const*);
    void calcLookDir(sead::Vector3<float> *,al::CameraPoser const*);
    void calcCameraDir(sead::Vector3<float> *,al::CameraPoser const*);
    void calcCameraDirH(sead::Vector3<float> *,al::CameraPoser const*);
    void calcLookDirH(sead::Vector3<float> *,al::CameraPoser const*);
    void calcSideDir(sead::Vector3<float> *,al::CameraPoser const*);
    void calcPreCameraDir(sead::Vector3<float> *,al::CameraPoser const*);
    void calcPreCameraDirH(sead::Vector3<float> *,al::CameraPoser const*);
    void calcPreLookDir(sead::Vector3<float> *,al::CameraPoser const*);
    void calcPreLookDirH(sead::Vector3<float> *,al::CameraPoser const*);
    float calcPreCameraAngleH(al::CameraPoser const*);
    float calcPreCameraAngleV(al::CameraPoser const*);
    void setLookAtPosToTarget(al::CameraPoser *);
    void calcTargetTrans(sead::Vector3<float> *,al::CameraPoser const*);
    void setLookAtPosToTargetAddOffset(al::CameraPoser *,sead::Vector3<float> const&);
    void setCameraPosToTarget(al::CameraPoser *);
    void setCameraPosToTargetAddOffset(al::CameraPoser *,sead::Vector3<float> const&);
    void calcTargetTransWithOffset(sead::Vector3<float> *,al::CameraPoser const*);
    void calcTargetVelocity(sead::Vector3<float> *,al::CameraPoser const*);
    void calcTargetVelocityH(sead::Vector3<float> *,al::CameraPoser const*);
    void calcTargetUp(sead::Vector3<float> *,al::CameraPoser const*);
    void calcTargetSpeedV(al::CameraPoser const*);
    void calcTargetPose(sead::Quat<float> *,al::CameraPoser const*);
    void calcTargetFront(sead::Vector3<float> *,al::CameraPoser const*);
    void calcTargetSide(sead::Vector3<float> *,al::CameraPoser const*);
    void calcTargetGravity(sead::Vector3<float> *,al::CameraPoser const*);
    void calcTargetSpeedH(al::CameraPoser const*);
    void calcTargetJumpSpeed(al::CameraPoser const*);
    void calcTargetFallSpeed(al::CameraPoser const*);
    void tryGetTargetRequestDistance(float *,al::CameraPoser const*);
    void tryGetBossDistanceCurve(al::CameraPoser const*);
    void tryGetEquipmentDistanceCurve(al::CameraPoser const*);
    void tryCalcSlopeCollisionDownFrontDirH(sead::Vector3<float> *,al::CameraPoser const*);
    void checkValidTurnToSubTarget(al::CameraPoser const*);
    void calcSubTargetBack(sead::Vector3<float> *,al::CameraPoser const*);
    void calcSubTargetTrans(sead::Vector3<float> *,al::CameraPoser const*);
    void calcSubTargetFront(sead::Vector3<float> *,al::CameraPoser const*);
    void tryCalcSubTargetTurnBrakeDistanceRate(float *,al::CameraPoser const*);
    void clampAngleSubTargetTurnRangeV(float *,al::CameraPoser const*);
    void initCameraVerticalAbsorber(al::CameraPoser *);
    void initCameraVerticalAbsorberNoCameraPosAbsorb(al::CameraPoser *);
    void liberateVerticalAbsorb(al::CameraPoser *);
    void stopUpdateVerticalAbsorb(al::CameraPoser *);
    void stopUpdateVerticalAbsorbForSnapShotMode(al::CameraPoser *,sead::Vector3<float> const&);
    void restartUpdateVerticalAbsorb(al::CameraPoser *);
    void validateVerticalAbsorbKeepInFrame(al::CameraPoser *);
    void invalidateVerticalAbsorbKeepInFrame(al::CameraPoser *);
    void setVerticalAbsorbKeepInFrameScreenOffsetUp(al::CameraPoser *,float);
    void setVerticalAbsorbKeepInFrameScreenOffsetDown(al::CameraPoser *,float);
    void initCameraArrowCollider(al::CameraPoser *);
    void initCameraArrowColliderWithoutThroughPassCollision(al::CameraPoser *);
    void initCameraMoveLimit(al::CameraPoser *);
    void initCameraAngleCtrl(al::CameraPoser *);
    void initCameraAngleCtrlWithRelativeH(al::CameraPoser *);
    void initCameraDefaultAngleRangeV(al::CameraPoser *,float,float);
    void setCameraStartAngleV(al::CameraPoser *,float);
    void setCameraAngleV(al::CameraPoser *,float);
    void initAngleSwing(al::CameraPoser *);
    void initCameraOffsetCtrlPreset(al::CameraPoser *);
    void initGyroCameraCtrl(al::CameraPoser *);
    void resetGyro(al::CameraPoser *);
    void calcCameraGyroPose(al::CameraPoser const*,sead::Vector3<float> *,sead::Vector3<float> *,sead::Vector3<float> *);
    void setGyroLimitAngleV(al::CameraPoser *,float,float);
    void setGyroSensitivity(al::CameraPoser *,float,float);
    void reduceGyroSencitivity(al::CameraPoser *);
    void stopUpdateGyro(al::CameraPoser *);
    void restartUpdateGyro(al::CameraPoser *);
    void initSnapShotCameraCtrl(al::CameraPoser *);
    void initSnapShotCameraCtrlZoomAutoReset(al::CameraPoser *);
    void initSnapShotCameraCtrlZoomRollMove(al::CameraPoser *);
    void validateSnapShotCameraLookAtOffset(al::CameraPoser *);
    void validateSnapShotCameraZoomFovy(al::CameraPoser *);
    void validateSnapShotCameraRoll(al::CameraPoser *);
    void updateSnapShotCameraCtrl(al::CameraPoser *);
    void startResetSnapShotCameraCtrl(al::CameraPoser *,int);
    void setSnapShotMaxZoomOutFovyDegree(al::CameraPoser *,float);
    void onVerticalAbsorb(al::CameraPoser *);
    void offVerticalAbsorb(al::CameraPoser *);
    void invalidateCameraBlur(al::CameraPoser *);
    void validateCollider(al::CameraPoser *);
    void invalidateCollider(al::CameraPoser *);
    void validateCtrlSubjective(al::CameraPoser *);
    void invalidateChangeSubjective(al::CameraPoser *);
    void invalidateKeepDistanceNextCamera(al::CameraPoser *);
    void invalidateKeepDistanceNextCameraIfNoCollide(al::CameraPoser *);
    void invalidatePreCameraEndAfterInterpole(al::CameraPoser *);
    void checkFirstCameraCollisionArrow(sead::Vector3<float> *,sead::Vector3<float> *,al::IUseCollision const*,sead::Vector3<float> const&,sead::Vector3<float> const&);
    void checkFirstCameraCollisionArrow(alCameraPoserFunction::CameraCollisionHitResult *,al::IUseCollision const*,sead::Vector3<float> const&,sead::Vector3<float> const&);
    void checkFirstCameraCollisionArrowOnlyCeiling(sead::Vector3<float> *,sead::Vector3<float> *,al::IUseCollision const*,sead::Vector3<float> const&,sead::Vector3<float> const&);
    void checkCameraCollisionMoveSphere(sead::Vector3<float> *,al::IUseCollision const*,sead::Vector3<float> const&,sead::Vector3<float> const&,float);
    void calcZoneRotateAngleH(float,al::CameraPoser const*);
    void calcZoneRotateAngleH(float,sead::Matrix34<float> const&);
    void calcZoneInvRotateAngleH(float,sead::Matrix34<float> const&);
    void multVecZone(sead::Vector3<float> *,sead::Vector3<float> const&,al::CameraPoser const*);
    void multVecInvZone(sead::Vector3<float> *,sead::Vector3<float> const&,al::CameraPoser const*);
    void rotateVecZone(sead::Vector3<float> *,sead::Vector3<float> const&,al::CameraPoser const*);
    void calcOffsetCameraKeepInFrameV(sead::Vector3<float> *,sead::LookAtCamera *,sead::Vector3<float> const&,al::CameraPoser const*,float,float);
    void makeCameraKeepInFrameV(sead::LookAtCamera *,sead::Vector3<float> const&,al::CameraPoser const*,float,float);
    void initCameraRail(al::CameraPoser *,al::PlacementInfo const&,char const*);
    void tryGetCameraRailArg(float *,al::PlacementInfo const&,char const*,char const*);
    void tryFindNearestLimitRailKeeper(al::CameraPoser const*,sead::Vector3<float> const&);
    void calcCameraRotateStick(sead::Vector2<float> *,al::CameraPoser const*);
    float calcCameraRotateStickH(al::CameraPoser const*);
    float calcCameraRotateStickV(al::CameraPoser const*);
    float calcCameraRotateStickPower(al::CameraPoser const*);
    void tryCalcCameraSnapShotMoveStick(sead::Vector2<float>*, al::CameraPoser const*);
    
    void getViewIndex(al::CameraPoser const*);
    sead::LookAtCamera*  getLookAtCamera(al::CameraPoser const*);
    void getProjectionSead(al::CameraPoser const*);
    void getProjection(al::CameraPoser const*);
    void getProjectionMtx(al::CameraPoser const*);
    void getNear(al::CameraPoser const*);
    void getFar(al::CameraPoser const*);
    void getAspect(al::CameraPoser const*);
    void getPreCameraPos(al::CameraPoser const*);
    sead::Vector3f *getPreLookAtPos(al::CameraPoser const*);
    void getPreUpDir(al::CameraPoser const*);
    void getPreFovyDegree(al::CameraPoser const*);
    void getPreFovyRadian(al::CameraPoser const*);
    void getPreCameraSwingAngleH(al::CameraStartInfo const&);
    void getPreCameraSwingAngleV(al::CameraStartInfo const&);
    void getPreCameraMaxSwingAngleH(al::CameraStartInfo const&);
    void getPreCameraMaxSwingAngleV(al::CameraStartInfo const&);
    void getAreaAngleH(al::CameraStartInfo const&);
    void getAreaAngleV(al::CameraStartInfo const&);
    void getNextAngleHByPreCamera(al::CameraStartInfo const&);
    void getNextAngleVByPreCamera(al::CameraStartInfo const&);
    void getUnderTargetCollisionPos(al::CameraPoser const*);
    void getUnderTargetCollisionNormal(al::CameraPoser const*);
    void getSlopeCollisionUpSpeed(al::CameraPoser const*);
    void getSlopeCollisionDownSpeed(al::CameraPoser const*);
    void getSubTargetRequestDistance(al::CameraPoser const*);
    void getSubTargetTurnSpeedRate1(al::CameraPoser const*);
    void getSubTargetTurnSpeedRate2(al::CameraPoser const*);
    void getSubTargetTurnRestartStep(al::CameraPoser const*);
    void getCameraVerticalAbsorbPosUp(al::CameraPoser const*);
    void getCameraVerticalAbsorbPosDown(al::CameraPoser const*);
    float getCameraAngleH(al::CameraPoser const*);
    float getCameraAngleV(al::CameraPoser const*);
    float getOffset(al::CameraPoser const*);
    void getGyroFront(al::CameraPoser *);
    float getGyroAngleV(al::CameraPoser *);
    float getGyroAngleH(al::CameraPoser *);
    void getSnapShotRollDegree(al::CameraPoser const*);
    void getSnapShotLookAtOffset(al::CameraPoser const*);
    void getRequestTargetAngleV(al::CameraObjectRequestInfo const&);
    float getRequestAngleSpeed(al::CameraObjectRequestInfo const&);
    float getRequestAngleV(al::CameraObjectRequestInfo const&);
    void getCameraRailPointObjId(al::CameraPoser const*,int);
    float getStickSensitivityLevel(al::CameraPoser const*);
    float getStickSensitivityScale(al::CameraPoser const*);
    void getGyroSensitivityLevel(al::CameraPoser const*);
    void getGyroSensitivityScale(al::CameraPoser const*);

    bool isPrePriorityDemo(al::CameraStartInfo const&);
    bool isPrePriorityDemo2(al::CameraStartInfo const&);
    bool isPrePriorityDemoTalk(al::CameraStartInfo const&);
    bool isPrePriorityDemoAll(al::CameraStartInfo const&);
    bool isPrePriorityEntranceAll(al::CameraStartInfo const&);
    bool isPrePriorityPlayer(al::CameraStartInfo const&);
    bool isEqualPreCameraName(al::CameraStartInfo const&,char const*);
    bool isPreCameraFixAbsolute(al::CameraStartInfo const&);
    bool isInvalidCollidePreCamera(al::CameraStartInfo const&);
    bool isInvalidKeepPreCameraDistance(al::CameraStartInfo const&);
    bool isInvalidKeepPreCameraDistanceIfNoCollide(al::CameraStartInfo const&);
    bool isValidResetPreCameraPose(al::CameraStartInfo const&);
    bool isValidKeepPreSelfCameraPose(al::CameraStartInfo const&);
    bool isExistAreaAngleH(al::CameraStartInfo const&);
    bool isExistAreaAngleV(al::CameraStartInfo const&);
    bool isExistNextPoseByPreCamera(al::CameraStartInfo const&);
    bool isChangeTarget(al::CameraPoser const*);
    bool isExistCollisionUnderTarget(al::CameraPoser const*);
    bool isExistSlopeCollisionUnderTarget(al::CameraPoser const*);
    bool isExistWallCollisionUnderTarget(al::CameraPoser const*);
    bool isExistSubTarget(al::CameraPoser const*);
    bool isChangeSubTarget(al::CameraPoser const*);
    bool isValidSubTargetTurnV(al::CameraPoser const*);
    bool isValidSubTargetResetAfterTurnV(al::CameraPoser const*);
    bool isValidAngleSwing(al::CameraPoser const*);
    bool isStopUpdateGyro(al::CameraPoser const*);
    bool isTargetCollideGround(al::CameraPoser const*);
    bool isTargetInWater(al::CameraPoser const*);
    bool isTargetInMoonGravity(al::CameraPoser const*);
    bool isTargetClimbPole(al::CameraPoser const*);
    bool isTargetGrabCeil(al::CameraPoser const*);
    bool isTargetInvalidMoveByInput(al::CameraPoser const*);
    bool isTargetEnableEndAfterInterpole(al::CameraPoser const*);
    bool isTargetWallCatch(al::CameraPoser const*);
    bool isSnapShotMode(al::CameraPoser const*);
    bool isOffVerticalAbsorb(al::CameraPoser const*);
    bool isRequestStopVerticalAbsorb(al::CameraObjectRequestInfo const&);
    bool isRequestResetPosition(al::CameraObjectRequestInfo const&);
    bool isRequestResetAngleV(al::CameraObjectRequestInfo const&);
    bool isRequestDownToDefaultAngleBySpeed(al::CameraObjectRequestInfo const&);
    bool isRequestUpToTargetAngleBySpeed(al::CameraObjectRequestInfo const&);
    bool isRequestMoveDownAngleV(al::CameraObjectRequestInfo const&);
    bool isRequestSetAngleV(al::CameraObjectRequestInfo const&);
    bool isInvalidCollider(al::CameraPoser const*);
    bool isInvalidPreCameraEndAfterInterpole(al::CameraPoser const*);
    bool isSceneCameraFirstCalc(al::CameraPoser const*);
    bool isActiveInterpole(al::CameraPoser const*);
    bool isInvalidEndEntranceCamera(al::CameraPoser const*);
    bool isPause(al::CameraPoser const*);
    bool isValidGyro(al::CameraPoser const*);
    bool isTriggerCameraResetRotate(al::CameraPoser const*);
    bool isHoldCameraZoom(al::CameraPoser const*);
    bool isHoldCameraSnapShotZoomIn(al::CameraPoser const*);
    bool isHoldCameraSnapShotZoomOut(al::CameraPoser const*);
    bool isHoldCameraSnapShotRollLeft(al::CameraPoser const*);
    bool isHoldCameraSnapShotRollRight(al::CameraPoser const*);
    bool isPlayerTypeFlyer(al::CameraPoser const*);
    bool isPlayerTypeHighSpeedMove(al::CameraPoser const*);
    bool isPlayerTypeHighJump(al::CameraPoser const*);
    bool isPlayerTypeNotTouchGround(al::CameraPoser const*);
    bool isOnRideObj(al::CameraPoser const*);
}