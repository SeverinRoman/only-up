// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlyUp_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_OnlyUp;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_OnlyUp()
	{
		if (!Z_Registration_Info_UPackage__Script_OnlyUp.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/OnlyUp",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x9CDAB7AF,
				0xAED13F38,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_OnlyUp.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_OnlyUp.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_OnlyUp(Z_Construct_UPackage__Script_OnlyUp, TEXT("/Script/OnlyUp"), Z_Registration_Info_UPackage__Script_OnlyUp, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9CDAB7AF, 0xAED13F38));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
