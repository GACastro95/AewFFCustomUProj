// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EYGS2DebugMenuScriptValueType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEYGS2DebugMenuScriptValueType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EYGS2DebugMenuScriptValueType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EYGS2DebugMenuScriptValueType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EYGS2DebugMenuScriptValueType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EYGS2DebugMenuScriptValueType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EYGS2DebugMenuScriptValueType>()
	{
		return EYGS2DebugMenuScriptValueType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EYGS2DebugMenuScriptValueType(EYGS2DebugMenuScriptValueType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EYGS2DebugMenuScriptValueType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EYGS2DebugMenuScriptValueType_Hash() { return 3776336816U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EYGS2DebugMenuScriptValueType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EYGS2DebugMenuScriptValueType"), 0, Get_Z_Construct_UEnum_ABP_200508_EYGS2DebugMenuScriptValueType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EYGS2DebugMenuScriptValueType::CurrentAEWGold", (int64)EYGS2DebugMenuScriptValueType::CurrentAEWGold },
				{ "EYGS2DebugMenuScriptValueType::TotalAEWGold", (int64)EYGS2DebugMenuScriptValueType::TotalAEWGold },
				{ "EYGS2DebugMenuScriptValueType::Platform", (int64)EYGS2DebugMenuScriptValueType::Platform },
				{ "EYGS2DebugMenuScriptValueType::TransactionID", (int64)EYGS2DebugMenuScriptValueType::TransactionID },
				{ "EYGS2DebugMenuScriptValueType::Gold", (int64)EYGS2DebugMenuScriptValueType::Gold },
				{ "EYGS2DebugMenuScriptValueType::ItemKind", (int64)EYGS2DebugMenuScriptValueType::ItemKind },
				{ "EYGS2DebugMenuScriptValueType::ItemID", (int64)EYGS2DebugMenuScriptValueType::ItemID },
				{ "EYGS2DebugMenuScriptValueType::ItemNum", (int64)EYGS2DebugMenuScriptValueType::ItemNum },
				{ "EYGS2DebugMenuScriptValueType::SearchOffset", (int64)EYGS2DebugMenuScriptValueType::SearchOffset },
				{ "EYGS2DebugMenuScriptValueType::SearchNum", (int64)EYGS2DebugMenuScriptValueType::SearchNum },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CurrentAEWGold.Name", "EYGS2DebugMenuScriptValueType::CurrentAEWGold" },
				{ "Gold.Name", "EYGS2DebugMenuScriptValueType::Gold" },
				{ "ItemID.Name", "EYGS2DebugMenuScriptValueType::ItemID" },
				{ "ItemKind.Name", "EYGS2DebugMenuScriptValueType::ItemKind" },
				{ "ItemNum.Name", "EYGS2DebugMenuScriptValueType::ItemNum" },
				{ "ModuleRelativePath", "Public/EYGS2DebugMenuScriptValueType.h" },
				{ "Platform.Name", "EYGS2DebugMenuScriptValueType::Platform" },
				{ "SearchNum.Name", "EYGS2DebugMenuScriptValueType::SearchNum" },
				{ "SearchOffset.Name", "EYGS2DebugMenuScriptValueType::SearchOffset" },
				{ "TotalAEWGold.Name", "EYGS2DebugMenuScriptValueType::TotalAEWGold" },
				{ "TransactionID.Name", "EYGS2DebugMenuScriptValueType::TransactionID" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EYGS2DebugMenuScriptValueType",
				"EYGS2DebugMenuScriptValueType",
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
