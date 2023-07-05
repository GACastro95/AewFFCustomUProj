// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Core/Public/EBasicFunctionResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEBasicFunctionResult() {}
// Cross Module References
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EBasicFunctionResult();
	UPackage* Z_Construct_UPackage__Script_ELITE_Core();
// End Cross Module References
	static UEnum* EBasicFunctionResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Core_EBasicFunctionResult, Z_Construct_UPackage__Script_ELITE_Core(), TEXT("EBasicFunctionResult"));
		}
		return Singleton;
	}
	template<> ELITE_CORE_API UEnum* StaticEnum<EBasicFunctionResult>()
	{
		return EBasicFunctionResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBasicFunctionResult(EBasicFunctionResult_StaticEnum, TEXT("/Script/ELITE_Core"), TEXT("EBasicFunctionResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Core_EBasicFunctionResult_Hash() { return 4221154061U; }
	UEnum* Z_Construct_UEnum_ELITE_Core_EBasicFunctionResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Core();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBasicFunctionResult"), 0, Get_Z_Construct_UEnum_ELITE_Core_EBasicFunctionResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBasicFunctionResult::Success", (int64)EBasicFunctionResult::Success },
				{ "EBasicFunctionResult::Failed", (int64)EBasicFunctionResult::Failed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Failed.Name", "EBasicFunctionResult::Failed" },
				{ "ModuleRelativePath", "Public/EBasicFunctionResult.h" },
				{ "Success.Name", "EBasicFunctionResult::Success" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Core,
				nullptr,
				"EBasicFunctionResult",
				"EBasicFunctionResult",
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
