// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "hw09/Game/HWGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHWGameModeBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
HW09_API UClass* Z_Construct_UClass_AHWGameModeBase();
HW09_API UClass* Z_Construct_UClass_AHWGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_hw09();
// End Cross Module References

// Begin Class AHWGameModeBase
void AHWGameModeBase::StaticRegisterNativesAHWGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHWGameModeBase);
UClass* Z_Construct_UClass_AHWGameModeBase_NoRegister()
{
	return AHWGameModeBase::StaticClass();
}
struct Z_Construct_UClass_AHWGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/HWGameModeBase.h" },
		{ "ModuleRelativePath", "Game/HWGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHWGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AHWGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_hw09,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHWGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHWGameModeBase_Statics::ClassParams = {
	&AHWGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHWGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AHWGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHWGameModeBase()
{
	if (!Z_Registration_Info_UClass_AHWGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHWGameModeBase.OuterSingleton, Z_Construct_UClass_AHWGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHWGameModeBase.OuterSingleton;
}
template<> HW09_API UClass* StaticClass<AHWGameModeBase>()
{
	return AHWGameModeBase::StaticClass();
}
AHWGameModeBase::AHWGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHWGameModeBase);
AHWGameModeBase::~AHWGameModeBase() {}
// End Class AHWGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_junic_OneDrive_Desktop_HW09_HW09_hw09_Source_hw09_Game_HWGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHWGameModeBase, AHWGameModeBase::StaticClass, TEXT("AHWGameModeBase"), &Z_Registration_Info_UClass_AHWGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHWGameModeBase), 4118790333U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_junic_OneDrive_Desktop_HW09_HW09_hw09_Source_hw09_Game_HWGameModeBase_h_36075358(TEXT("/Script/hw09"),
	Z_CompiledInDeferFile_FID_Users_junic_OneDrive_Desktop_HW09_HW09_hw09_Source_hw09_Game_HWGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_junic_OneDrive_Desktop_HW09_HW09_hw09_Source_hw09_Game_HWGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
