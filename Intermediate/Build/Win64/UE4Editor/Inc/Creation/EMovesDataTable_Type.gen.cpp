// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EMovesDataTable_Type.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMovesDataTable_Type() {}
// Cross Module References
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EMovesDataTable_Type();
	UPackage* Z_Construct_UPackage__Script_Creation();
// End Cross Module References
	static UEnum* EMovesDataTable_Type_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Creation_EMovesDataTable_Type, Z_Construct_UPackage__Script_Creation(), TEXT("EMovesDataTable_Type"));
		}
		return Singleton;
	}
	template<> CREATION_API UEnum* StaticEnum<EMovesDataTable_Type>()
	{
		return EMovesDataTable_Type_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovesDataTable_Type(EMovesDataTable_Type_StaticEnum, TEXT("/Script/Creation"), TEXT("EMovesDataTable_Type"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Creation_EMovesDataTable_Type_Hash() { return 3151550493U; }
	UEnum* Z_Construct_UEnum_Creation_EMovesDataTable_Type()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovesDataTable_Type"), 0, Get_Z_Construct_UEnum_Creation_EMovesDataTable_Type_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovesDataTable_Type::DT_ChainMoves", (int64)EMovesDataTable_Type::DT_ChainMoves },
				{ "EMovesDataTable_Type::DT_StandAttack", (int64)EMovesDataTable_Type::DT_StandAttack },
				{ "EMovesDataTable_Type::DT_RunningAttack", (int64)EMovesDataTable_Type::DT_RunningAttack },
				{ "EMovesDataTable_Type::DT_Diving", (int64)EMovesDataTable_Type::DT_Diving },
				{ "EMovesDataTable_Type::DT_DownAttack", (int64)EMovesDataTable_Type::DT_DownAttack },
				{ "EMovesDataTable_Type::DT_StandTaunt", (int64)EMovesDataTable_Type::DT_StandTaunt },
				{ "EMovesDataTable_Type::DT_TwoPlatoons", (int64)EMovesDataTable_Type::DT_TwoPlatoons },
				{ "EMovesDataTable_Type::DT_WhipAttack", (int64)EMovesDataTable_Type::DT_WhipAttack },
				{ "EMovesDataTable_Type::DT_MAX", (int64)EMovesDataTable_Type::DT_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DT_ChainMoves.Name", "EMovesDataTable_Type::DT_ChainMoves" },
				{ "DT_Diving.Name", "EMovesDataTable_Type::DT_Diving" },
				{ "DT_DownAttack.Name", "EMovesDataTable_Type::DT_DownAttack" },
				{ "DT_MAX.Hidden", "" },
				{ "DT_MAX.Name", "EMovesDataTable_Type::DT_MAX" },
				{ "DT_RunningAttack.Name", "EMovesDataTable_Type::DT_RunningAttack" },
				{ "DT_StandAttack.Name", "EMovesDataTable_Type::DT_StandAttack" },
				{ "DT_StandTaunt.Name", "EMovesDataTable_Type::DT_StandTaunt" },
				{ "DT_TwoPlatoons.Name", "EMovesDataTable_Type::DT_TwoPlatoons" },
				{ "DT_WhipAttack.Name", "EMovesDataTable_Type::DT_WhipAttack" },
				{ "ModuleRelativePath", "Public/EMovesDataTable_Type.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Creation,
				nullptr,
				"EMovesDataTable_Type",
				"EMovesDataTable_Type",
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
