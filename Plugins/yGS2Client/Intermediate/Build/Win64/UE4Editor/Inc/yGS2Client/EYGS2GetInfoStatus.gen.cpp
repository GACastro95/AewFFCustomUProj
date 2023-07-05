// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yGS2Client/Public/EYGS2GetInfoStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEYGS2GetInfoStatus() {}
// Cross Module References
	YGS2CLIENT_API UEnum* Z_Construct_UEnum_yGS2Client_EYGS2GetInfoStatus();
	UPackage* Z_Construct_UPackage__Script_yGS2Client();
// End Cross Module References
	static UEnum* EYGS2GetInfoStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yGS2Client_EYGS2GetInfoStatus, Z_Construct_UPackage__Script_yGS2Client(), TEXT("EYGS2GetInfoStatus"));
		}
		return Singleton;
	}
	template<> YGS2CLIENT_API UEnum* StaticEnum<EYGS2GetInfoStatus>()
	{
		return EYGS2GetInfoStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EYGS2GetInfoStatus(EYGS2GetInfoStatus_StaticEnum, TEXT("/Script/yGS2Client"), TEXT("EYGS2GetInfoStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yGS2Client_EYGS2GetInfoStatus_Hash() { return 1216604632U; }
	UEnum* Z_Construct_UEnum_yGS2Client_EYGS2GetInfoStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yGS2Client();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EYGS2GetInfoStatus"), 0, Get_Z_Construct_UEnum_yGS2Client_EYGS2GetInfoStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EYGS2GetInfoStatus::Unknown", (int64)EYGS2GetInfoStatus::Unknown },
				{ "EYGS2GetInfoStatus::Retail", (int64)EYGS2GetInfoStatus::Retail },
				{ "EYGS2GetInfoStatus::Staging", (int64)EYGS2GetInfoStatus::Staging },
				{ "EYGS2GetInfoStatus::QA", (int64)EYGS2GetInfoStatus::QA },
				{ "EYGS2GetInfoStatus::Test_Maintenance", (int64)EYGS2GetInfoStatus::Test_Maintenance },
				{ "EYGS2GetInfoStatus::Maintenance", (int64)EYGS2GetInfoStatus::Maintenance },
				{ "EYGS2GetInfoStatus::Development", (int64)EYGS2GetInfoStatus::Development },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Development.Name", "EYGS2GetInfoStatus::Development" },
				{ "Maintenance.Name", "EYGS2GetInfoStatus::Maintenance" },
				{ "ModuleRelativePath", "Public/EYGS2GetInfoStatus.h" },
				{ "QA.Name", "EYGS2GetInfoStatus::QA" },
				{ "Retail.Name", "EYGS2GetInfoStatus::Retail" },
				{ "Staging.Name", "EYGS2GetInfoStatus::Staging" },
				{ "Test_Maintenance.Name", "EYGS2GetInfoStatus::Test_Maintenance" },
				{ "Unknown.Name", "EYGS2GetInfoStatus::Unknown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yGS2Client,
				nullptr,
				"EYGS2GetInfoStatus",
				"EYGS2GetInfoStatus",
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
