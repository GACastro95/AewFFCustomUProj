// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ERequestGoldCheckType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeERequestGoldCheckType() {}
// Cross Module References
	ELITE_API UEnum* Z_Construct_UEnum_ELITE_ERequestGoldCheckType();
	UPackage* Z_Construct_UPackage__Script_ELITE();
// End Cross Module References
	static UEnum* ERequestGoldCheckType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_ERequestGoldCheckType, Z_Construct_UPackage__Script_ELITE(), TEXT("ERequestGoldCheckType"));
		}
		return Singleton;
	}
	template<> ELITE_API UEnum* StaticEnum<ERequestGoldCheckType>()
	{
		return ERequestGoldCheckType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERequestGoldCheckType(ERequestGoldCheckType_StaticEnum, TEXT("/Script/ELITE"), TEXT("ERequestGoldCheckType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_ERequestGoldCheckType_Hash() { return 1529107810U; }
	UEnum* Z_Construct_UEnum_ELITE_ERequestGoldCheckType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERequestGoldCheckType"), 0, Get_Z_Construct_UEnum_ELITE_ERequestGoldCheckType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERequestGoldCheckType::NONE", (int64)ERequestGoldCheckType::NONE },
				{ "ERequestGoldCheckType::INIT", (int64)ERequestGoldCheckType::INIT },
				{ "ERequestGoldCheckType::PURCHASE", (int64)ERequestGoldCheckType::PURCHASE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "INIT.Name", "ERequestGoldCheckType::INIT" },
				{ "ModuleRelativePath", "Public/ERequestGoldCheckType.h" },
				{ "NONE.Name", "ERequestGoldCheckType::NONE" },
				{ "PURCHASE.Name", "ERequestGoldCheckType::PURCHASE" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE,
				nullptr,
				"ERequestGoldCheckType",
				"ERequestGoldCheckType",
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
