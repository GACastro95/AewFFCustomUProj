// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EMovesTag_MovesIndex.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMovesTag_MovesIndex() {}
// Cross Module References
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EMovesTag_MovesIndex();
	UPackage* Z_Construct_UPackage__Script_Creation();
// End Cross Module References
	static UEnum* EMovesTag_MovesIndex_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Creation_EMovesTag_MovesIndex, Z_Construct_UPackage__Script_Creation(), TEXT("EMovesTag_MovesIndex"));
		}
		return Singleton;
	}
	template<> CREATION_API UEnum* StaticEnum<EMovesTag_MovesIndex>()
	{
		return EMovesTag_MovesIndex_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovesTag_MovesIndex(EMovesTag_MovesIndex_StaticEnum, TEXT("/Script/Creation"), TEXT("EMovesTag_MovesIndex"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Creation_EMovesTag_MovesIndex_Hash() { return 2133803205U; }
	UEnum* Z_Construct_UEnum_Creation_EMovesTag_MovesIndex()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovesTag_MovesIndex"), 0, Get_Z_Construct_UEnum_Creation_EMovesTag_MovesIndex_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovesTag_MovesIndex::MV_DDT", (int64)EMovesTag_MovesIndex::MV_DDT },
				{ "EMovesTag_MovesIndex::MV_Powerbomb", (int64)EMovesTag_MovesIndex::MV_Powerbomb },
				{ "EMovesTag_MovesIndex::MV_Hurricanerana", (int64)EMovesTag_MovesIndex::MV_Hurricanerana },
				{ "EMovesTag_MovesIndex::MV_Suplex", (int64)EMovesTag_MovesIndex::MV_Suplex },
				{ "EMovesTag_MovesIndex::MV_Slam", (int64)EMovesTag_MovesIndex::MV_Slam },
				{ "EMovesTag_MovesIndex::MV_Drop", (int64)EMovesTag_MovesIndex::MV_Drop },
				{ "EMovesTag_MovesIndex::MV_Piledriver", (int64)EMovesTag_MovesIndex::MV_Piledriver },
				{ "EMovesTag_MovesIndex::MV_Backbreaker", (int64)EMovesTag_MovesIndex::MV_Backbreaker },
				{ "EMovesTag_MovesIndex::MV_MAX", (int64)EMovesTag_MovesIndex::MV_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EMovesTag_MovesIndex.h" },
				{ "MV_Backbreaker.Name", "EMovesTag_MovesIndex::MV_Backbreaker" },
				{ "MV_DDT.Name", "EMovesTag_MovesIndex::MV_DDT" },
				{ "MV_Drop.Name", "EMovesTag_MovesIndex::MV_Drop" },
				{ "MV_Hurricanerana.Name", "EMovesTag_MovesIndex::MV_Hurricanerana" },
				{ "MV_MAX.Hidden", "" },
				{ "MV_MAX.Name", "EMovesTag_MovesIndex::MV_MAX" },
				{ "MV_Piledriver.Name", "EMovesTag_MovesIndex::MV_Piledriver" },
				{ "MV_Powerbomb.Name", "EMovesTag_MovesIndex::MV_Powerbomb" },
				{ "MV_Slam.Name", "EMovesTag_MovesIndex::MV_Slam" },
				{ "MV_Suplex.Name", "EMovesTag_MovesIndex::MV_Suplex" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Creation,
				nullptr,
				"EMovesTag_MovesIndex",
				"EMovesTag_MovesIndex",
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
