// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/HWPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HW09_HWPlayerController_generated_h
#error "HWPlayerController.generated.h already included, missing '#pragma once' in HWPlayerController.h"
#endif
#define HW09_HWPlayerController_generated_h

#define FID_Users_junic_OneDrive_Desktop_HW09_HW09_hw09_Source_hw09_Player_HWPlayerController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerRPCPrintChatMessageString_Implementation(const FString& InChatMessageString); \
	virtual void ClientRPCPrintChatMessageString_Implementation(const FString& InChatMessageString); \
	DECLARE_FUNCTION(execServerRPCPrintChatMessageString); \
	DECLARE_FUNCTION(execClientRPCPrintChatMessageString);


#define FID_Users_junic_OneDrive_Desktop_HW09_HW09_hw09_Source_hw09_Player_HWPlayerController_h_18_CALLBACK_WRAPPERS
#define FID_Users_junic_OneDrive_Desktop_HW09_HW09_hw09_Source_hw09_Player_HWPlayerController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHWPlayerController(); \
	friend struct Z_Construct_UClass_AHWPlayerController_Statics; \
public: \
	DECLARE_CLASS(AHWPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/hw09"), NO_API) \
	DECLARE_SERIALIZER(AHWPlayerController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		NotificationText=NETFIELD_REP_START, \
		NETFIELD_REP_END=NotificationText	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_junic_OneDrive_Desktop_HW09_HW09_hw09_Source_hw09_Player_HWPlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AHWPlayerController(AHWPlayerController&&); \
	AHWPlayerController(const AHWPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHWPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHWPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHWPlayerController) \
	NO_API virtual ~AHWPlayerController();


#define FID_Users_junic_OneDrive_Desktop_HW09_HW09_hw09_Source_hw09_Player_HWPlayerController_h_15_PROLOG
#define FID_Users_junic_OneDrive_Desktop_HW09_HW09_hw09_Source_hw09_Player_HWPlayerController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_junic_OneDrive_Desktop_HW09_HW09_hw09_Source_hw09_Player_HWPlayerController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_junic_OneDrive_Desktop_HW09_HW09_hw09_Source_hw09_Player_HWPlayerController_h_18_CALLBACK_WRAPPERS \
	FID_Users_junic_OneDrive_Desktop_HW09_HW09_hw09_Source_hw09_Player_HWPlayerController_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_junic_OneDrive_Desktop_HW09_HW09_hw09_Source_hw09_Player_HWPlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HW09_API UClass* StaticClass<class AHWPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_junic_OneDrive_Desktop_HW09_HW09_hw09_Source_hw09_Player_HWPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
