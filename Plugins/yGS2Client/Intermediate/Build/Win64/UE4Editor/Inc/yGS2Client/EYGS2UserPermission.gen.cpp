// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yGS2Client/Public/EYGS2UserPermission.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEYGS2UserPermission() {}
// Cross Module References
	YGS2CLIENT_API UEnum* Z_Construct_UEnum_yGS2Client_EYGS2UserPermission();
	UPackage* Z_Construct_UPackage__Script_yGS2Client();
// End Cross Module References
	static UEnum* EYGS2UserPermission_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yGS2Client_EYGS2UserPermission, Z_Construct_UPackage__Script_yGS2Client(), TEXT("EYGS2UserPermission"));
		}
		return Singleton;
	}
	template<> YGS2CLIENT_API UEnum* StaticEnum<EYGS2UserPermission>()
	{
		return EYGS2UserPermission_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EYGS2UserPermission(EYGS2UserPermission_StaticEnum, TEXT("/Script/yGS2Client"), TEXT("EYGS2UserPermission"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yGS2Client_EYGS2UserPermission_Hash() { return 2068626944U; }
	UEnum* Z_Construct_UEnum_yGS2Client_EYGS2UserPermission()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yGS2Client();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EYGS2UserPermission"), 0, Get_Z_Construct_UEnum_yGS2Client_EYGS2UserPermission_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EYGS2UserPermission::None", (int64)EYGS2UserPermission::None },
				{ "EYGS2UserPermission::Test", (int64)EYGS2UserPermission::Test },
				{ "EYGS2UserPermission::Development", (int64)EYGS2UserPermission::Development },
				{ "EYGS2UserPermission::Development_SS", (int64)EYGS2UserPermission::Development_SS },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Development.Name", "EYGS2UserPermission::Development" },
				{ "Development_SS.Name", "EYGS2UserPermission::Development_SS" },
				{ "ModuleRelativePath", "Public/EYGS2UserPermission.h" },
				{ "None.Name", "EYGS2UserPermission::None" },
				{ "Test.Name", "EYGS2UserPermission::Test" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yGS2Client,
				nullptr,
				"EYGS2UserPermission",
				"EYGS2UserPermission",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
