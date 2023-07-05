// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSAutoResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSAutoResult() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSAutoResult();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSAutoResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSAutoResult, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSAutoResult"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSAutoResult>()
	{
		return ESSAutoResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSAutoResult(ESSAutoResult_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSAutoResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSAutoResult_Hash() { return 3835538893U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSAutoResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSAutoResult"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSAutoResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSAutoResult::None", (int64)ESSAutoResult::None },
				{ "ESSAutoResult::SkipAll", (int64)ESSAutoResult::SkipAll },
				{ "ESSAutoResult::SkipResultOnly", (int64)ESSAutoResult::SkipResultOnly },
				{ "ESSAutoResult::Max", (int64)ESSAutoResult::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Max.Name", "ESSAutoResult::Max" },
				{ "ModuleRelativePath", "Public/ESSAutoResult.h" },
				{ "None.Name", "ESSAutoResult::None" },
				{ "SkipAll.Name", "ESSAutoResult::SkipAll" },
				{ "SkipResultOnly.Name", "ESSAutoResult::SkipResultOnly" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSAutoResult",
				"ESSAutoResult",
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
