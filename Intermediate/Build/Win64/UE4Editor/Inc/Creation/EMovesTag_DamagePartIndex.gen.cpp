// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EMovesTag_DamagePartIndex.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMovesTag_DamagePartIndex() {}
// Cross Module References
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EMovesTag_DamagePartIndex();
	UPackage* Z_Construct_UPackage__Script_Creation();
// End Cross Module References
	static UEnum* EMovesTag_DamagePartIndex_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Creation_EMovesTag_DamagePartIndex, Z_Construct_UPackage__Script_Creation(), TEXT("EMovesTag_DamagePartIndex"));
		}
		return Singleton;
	}
	template<> CREATION_API UEnum* StaticEnum<EMovesTag_DamagePartIndex>()
	{
		return EMovesTag_DamagePartIndex_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovesTag_DamagePartIndex(EMovesTag_DamagePartIndex_StaticEnum, TEXT("/Script/Creation"), TEXT("EMovesTag_DamagePartIndex"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Creation_EMovesTag_DamagePartIndex_Hash() { return 787315848U; }
	UEnum* Z_Construct_UEnum_Creation_EMovesTag_DamagePartIndex()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovesTag_DamagePartIndex"), 0, Get_Z_Construct_UEnum_Creation_EMovesTag_DamagePartIndex_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovesTag_DamagePartIndex::DP_Head", (int64)EMovesTag_DamagePartIndex::DP_Head },
				{ "EMovesTag_DamagePartIndex::DP_Body", (int64)EMovesTag_DamagePartIndex::DP_Body },
				{ "EMovesTag_DamagePartIndex::DP_Arms", (int64)EMovesTag_DamagePartIndex::DP_Arms },
				{ "EMovesTag_DamagePartIndex::DP_Legs", (int64)EMovesTag_DamagePartIndex::DP_Legs },
				{ "EMovesTag_DamagePartIndex::DP_MAX", (int64)EMovesTag_DamagePartIndex::DP_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DP_Arms.Name", "EMovesTag_DamagePartIndex::DP_Arms" },
				{ "DP_Body.Name", "EMovesTag_DamagePartIndex::DP_Body" },
				{ "DP_Head.Name", "EMovesTag_DamagePartIndex::DP_Head" },
				{ "DP_Legs.Name", "EMovesTag_DamagePartIndex::DP_Legs" },
				{ "DP_MAX.Hidden", "" },
				{ "DP_MAX.Name", "EMovesTag_DamagePartIndex::DP_MAX" },
				{ "ModuleRelativePath", "Public/EMovesTag_DamagePartIndex.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Creation,
				nullptr,
				"EMovesTag_DamagePartIndex",
				"EMovesTag_DamagePartIndex",
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
