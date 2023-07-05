// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/EReserveReversalType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEReserveReversalType() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EReserveReversalType();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* EReserveReversalType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_EReserveReversalType, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("EReserveReversalType"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<EReserveReversalType>()
	{
		return EReserveReversalType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EReserveReversalType(EReserveReversalType_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("EReserveReversalType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_EReserveReversalType_Hash() { return 1415838436U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_EReserveReversalType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EReserveReversalType"), 0, Get_Z_Construct_UEnum_ELITE_Game_EReserveReversalType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EReserveReversalType::None", (int64)EReserveReversalType::None },
				{ "EReserveReversalType::Strike", (int64)EReserveReversalType::Strike },
				{ "EReserveReversalType::Grapple", (int64)EReserveReversalType::Grapple },
				{ "EReserveReversalType::Special", (int64)EReserveReversalType::Special },
				{ "EReserveReversalType::RS_Up", (int64)EReserveReversalType::RS_Up },
				{ "EReserveReversalType::RS_Down", (int64)EReserveReversalType::RS_Down },
				{ "EReserveReversalType::RS_Left", (int64)EReserveReversalType::RS_Left },
				{ "EReserveReversalType::RS_Right", (int64)EReserveReversalType::RS_Right },
				{ "EReserveReversalType::Kick", (int64)EReserveReversalType::Kick },
				{ "EReserveReversalType::Strike_RandomChoiceFailed", (int64)EReserveReversalType::Strike_RandomChoiceFailed },
				{ "EReserveReversalType::Grapple_RandomChoiceFailed", (int64)EReserveReversalType::Grapple_RandomChoiceFailed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Grapple.Name", "EReserveReversalType::Grapple" },
				{ "Grapple_RandomChoiceFailed.Name", "EReserveReversalType::Grapple_RandomChoiceFailed" },
				{ "Kick.Name", "EReserveReversalType::Kick" },
				{ "ModuleRelativePath", "Public/EReserveReversalType.h" },
				{ "None.Name", "EReserveReversalType::None" },
				{ "RS_Down.Name", "EReserveReversalType::RS_Down" },
				{ "RS_Left.Name", "EReserveReversalType::RS_Left" },
				{ "RS_Right.Name", "EReserveReversalType::RS_Right" },
				{ "RS_Up.Name", "EReserveReversalType::RS_Up" },
				{ "Special.Name", "EReserveReversalType::Special" },
				{ "Strike.Name", "EReserveReversalType::Strike" },
				{ "Strike_RandomChoiceFailed.Name", "EReserveReversalType::Strike_RandomChoiceFailed" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"EReserveReversalType",
				"EReserveReversalType",
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
