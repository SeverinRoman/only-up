// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlyUp/OnlyUpGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlyUpGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	ONLYUP_API UClass* Z_Construct_UClass_AOnlyUpGameMode();
	ONLYUP_API UClass* Z_Construct_UClass_AOnlyUpGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OnlyUp();
// End Cross Module References
	void AOnlyUpGameMode::StaticRegisterNativesAOnlyUpGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOnlyUpGameMode);
	UClass* Z_Construct_UClass_AOnlyUpGameMode_NoRegister()
	{
		return AOnlyUpGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AOnlyUpGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOnlyUpGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlyUp,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOnlyUpGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnlyUpGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "OnlyUpGameMode.h" },
		{ "ModuleRelativePath", "OnlyUpGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOnlyUpGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOnlyUpGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AOnlyUpGameMode_Statics::ClassParams = {
		&AOnlyUpGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOnlyUpGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AOnlyUpGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AOnlyUpGameMode()
	{
		if (!Z_Registration_Info_UClass_AOnlyUpGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOnlyUpGameMode.OuterSingleton, Z_Construct_UClass_AOnlyUpGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AOnlyUpGameMode.OuterSingleton;
	}
	template<> ONLYUP_API UClass* StaticClass<AOnlyUpGameMode>()
	{
		return AOnlyUpGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOnlyUpGameMode);
	AOnlyUpGameMode::~AOnlyUpGameMode() {}
	struct Z_CompiledInDeferFile_FID_GitHub_only_up_OnlyUp_Source_OnlyUp_OnlyUpGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_only_up_OnlyUp_Source_OnlyUp_OnlyUpGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AOnlyUpGameMode, AOnlyUpGameMode::StaticClass, TEXT("AOnlyUpGameMode"), &Z_Registration_Info_UClass_AOnlyUpGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOnlyUpGameMode), 2096477933U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_only_up_OnlyUp_Source_OnlyUp_OnlyUpGameMode_h_3545080265(TEXT("/Script/OnlyUp"),
		Z_CompiledInDeferFile_FID_GitHub_only_up_OnlyUp_Source_OnlyUp_OnlyUpGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_only_up_OnlyUp_Source_OnlyUp_OnlyUpGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
