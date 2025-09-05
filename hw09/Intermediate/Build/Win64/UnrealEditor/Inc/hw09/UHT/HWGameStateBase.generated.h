// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/HWGameStateBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HW09_HWGameStateBase_generated_h
#error "HWGameStateBase.generated.h already included, missing '#pragma once' in HWGameStateBase.h"
#endif
#define HW09_HWGameStateBase_generated_h

#define FID_Users_junic_OneDrive_Desktop_HW09_HW09_hw09_Source_hw09_Game_HWGameStateBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastRPCBroadcastLoginMessage_Implementation(const FString& InNameString); \
	DECLARE_FUNCTION(execMulticastRPCBroadcastLoginMessage);


#define FID_Users_junic_OneDrive_Desktop_HW09_HW09_hw09_Source_hw09_Game_HWGameStateBase_h_15_CALLBACK_WRAPPERS
#define FID_Users_junic_OneDrive_Desktop_HW09_HW09_hw09_Source_hw09_Game_HWGameStateBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHWGameStateBase(); \
	friend struct Z_Construct_UClass_AHWGameStateBase_Statics; \
public: \
	DECLARE_CLASS(AHWGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/hw09"), NO_API) \
	DECLARE_SERIALIZER(AHWGameStateBase)


#define FID_Users_junic_OneDrive_Desktop_HW09_HW09_hw09_Source_hw09_Game_HWGameStateBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHWGameStateBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AHWGameStateBase(AHWGameStateBase&&); \
	AHWGameStateBase(const AHWGameStateBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHWGameStateBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHWGameStateBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHWGameStateBase) \
	NO_API virtual ~AHWGameStateBase();


#define FID_Users_junic_OneDrive_Desktop_HW09_HW09_hw09_Source_hw09_Game_HWGameStateBase_h_12_PROLOG
#define FID_Users_junic_OneDrive_Desktop_HW09_HW09_hw09_Source_hw09_Game_HWGameStateBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_junic_OneDrive_Desktop_HW09_HW09_hw09_Source_hw09_Game_HWGameStateBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_junic_OneDrive_Desktop_HW09_HW09_hw09_Source_hw09_Game_HWGameStateBase_h_15_CALLBACK_WRAPPERS \
	FID_Users_junic_OneDrive_Desktop_HW09_HW09_hw09_Source_hw09_Game_HWGameStateBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_junic_OneDrive_Desktop_HW09_HW09_hw09_Source_hw09_Game_HWGameStateBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HW09_API UClass* StaticClass<class AHWGameStateBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_junic_OneDrive_Desktop_HW09_HW09_hw09_Source_hw09_Game_HWGameStateBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
