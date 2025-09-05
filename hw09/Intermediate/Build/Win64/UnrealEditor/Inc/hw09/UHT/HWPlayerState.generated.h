// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/HWPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HW09_HWPlayerState_generated_h
#error "HWPlayerState.generated.h already included, missing '#pragma once' in HWPlayerState.h"
#endif
#define HW09_HWPlayerState_generated_h

#define FID_Users_junic_OneDrive_Desktop_HW09_HW09_hw09_Source_hw09_Player_HWPlayerState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHWPlayerState(); \
	friend struct Z_Construct_UClass_AHWPlayerState_Statics; \
public: \
	DECLARE_CLASS(AHWPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/hw09"), NO_API) \
	DECLARE_SERIALIZER(AHWPlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PlayerNameString=NETFIELD_REP_START, \
		CurrentGuessCount, \
		MaxGuessCount, \
		NETFIELD_REP_END=MaxGuessCount	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_junic_OneDrive_Desktop_HW09_HW09_hw09_Source_hw09_Player_HWPlayerState_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AHWPlayerState(AHWPlayerState&&); \
	AHWPlayerState(const AHWPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHWPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHWPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHWPlayerState) \
	NO_API virtual ~AHWPlayerState();


#define FID_Users_junic_OneDrive_Desktop_HW09_HW09_hw09_Source_hw09_Player_HWPlayerState_h_12_PROLOG
#define FID_Users_junic_OneDrive_Desktop_HW09_HW09_hw09_Source_hw09_Player_HWPlayerState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_junic_OneDrive_Desktop_HW09_HW09_hw09_Source_hw09_Player_HWPlayerState_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_junic_OneDrive_Desktop_HW09_HW09_hw09_Source_hw09_Player_HWPlayerState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HW09_API UClass* StaticClass<class AHWPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_junic_OneDrive_Desktop_HW09_HW09_hw09_Source_hw09_Player_HWPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
