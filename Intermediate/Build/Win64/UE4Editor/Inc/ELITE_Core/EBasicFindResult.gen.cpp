// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Core/Public/EBasicFindResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEBasicFindResult() {}
// Cross Module References
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EBasicFindResult();
	UPackage* Z_Construct_UPackage__Script_ELITE_Core();
// End Cross Module References
	static UEnum* EBasicFindResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Core_EBasicFindResult, Z_Construct_UPackage__Script_ELITE_Core(), TEXT("EBasicFindResult"));
		}
		return Singleton;
	}
	template<> ELITE_CORE_API UEnum* StaticEnum<EBasicFindResult>()
	{
		return EBasicFindResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBasicFindResult(EBasicFindResult_StaticEnum, TEXT("/Script/ELITE_Core"), TEXT("EBasicFindResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Core_EBasicFindResult_Hash() { return 2414734426U; }
	UEnum* Z_Construct_UEnum_ELITE_Core_EBasicFindResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Core();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBasicFindResult"), 0, Get_Z_Construct_UEnum_ELITE_Core_EBasicFindResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBasicFindResult::Found", (int64)EBasicFindResult::Found },
				{ "EBasicFindResult::NotFound", (int64)EBasicFindResult::NotFound },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Found.Name", "EBasicFindResult::Found" },
				{ "ModuleRelativePath", "Public/EBasicFindResult.h" },
				{ "NotFound.Name", "EBasicFindResult::NotFound" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Core,
				nullptr,
				"EBasicFindResult",
				"EBasicFindResult",
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
