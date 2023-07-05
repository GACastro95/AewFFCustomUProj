// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSDataLoadingResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSDataLoadingResult() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSDataLoadingResult();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSDataLoadingResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSDataLoadingResult, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSDataLoadingResult"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSDataLoadingResult>()
	{
		return ESSDataLoadingResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSDataLoadingResult(ESSDataLoadingResult_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSDataLoadingResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSDataLoadingResult_Hash() { return 2767258164U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSDataLoadingResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSDataLoadingResult"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSDataLoadingResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSDataLoadingResult::None", (int64)ESSDataLoadingResult::None },
				{ "ESSDataLoadingResult::Success", (int64)ESSDataLoadingResult::Success },
				{ "ESSDataLoadingResult::Failed", (int64)ESSDataLoadingResult::Failed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Failed.Name", "ESSDataLoadingResult::Failed" },
				{ "ModuleRelativePath", "Public/ESSDataLoadingResult.h" },
				{ "None.Name", "ESSDataLoadingResult::None" },
				{ "Success.Name", "ESSDataLoadingResult::Success" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSDataLoadingResult",
				"ESSDataLoadingResult",
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
