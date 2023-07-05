// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EELYGS2SetupStep.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEELYGS2SetupStep() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELYGS2SetupStep();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EELYGS2SetupStep_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EELYGS2SetupStep, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EELYGS2SetupStep"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EELYGS2SetupStep>()
	{
		return EELYGS2SetupStep_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EELYGS2SetupStep(EELYGS2SetupStep_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EELYGS2SetupStep"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EELYGS2SetupStep_Hash() { return 1100676607U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EELYGS2SetupStep()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EELYGS2SetupStep"), 0, Get_Z_Construct_UEnum_ABP_200508_EELYGS2SetupStep_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EELYGS2SetupStep::None", (int64)EELYGS2SetupStep::None },
				{ "EELYGS2SetupStep::DownloadedServerList", (int64)EELYGS2SetupStep::DownloadedServerList },
				{ "EELYGS2SetupStep::RequestPing", (int64)EELYGS2SetupStep::RequestPing },
				{ "EELYGS2SetupStep::Ready", (int64)EELYGS2SetupStep::Ready },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DownloadedServerList.Name", "EELYGS2SetupStep::DownloadedServerList" },
				{ "ModuleRelativePath", "Public/EELYGS2SetupStep.h" },
				{ "None.Name", "EELYGS2SetupStep::None" },
				{ "Ready.Name", "EELYGS2SetupStep::Ready" },
				{ "RequestPing.Name", "EELYGS2SetupStep::RequestPing" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EELYGS2SetupStep",
				"EELYGS2SetupStep",
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
