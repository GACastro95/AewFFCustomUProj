// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/EELEntranceNameplateCommentCompareType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEELEntranceNameplateCommentCompareType() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELEntranceNameplateCommentCompareType();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* EELEntranceNameplateCommentCompareType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_EELEntranceNameplateCommentCompareType, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("EELEntranceNameplateCommentCompareType"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<EELEntranceNameplateCommentCompareType>()
	{
		return EELEntranceNameplateCommentCompareType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EELEntranceNameplateCommentCompareType(EELEntranceNameplateCommentCompareType_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("EELEntranceNameplateCommentCompareType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_EELEntranceNameplateCommentCompareType_Hash() { return 1760561563U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_EELEntranceNameplateCommentCompareType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EELEntranceNameplateCommentCompareType"), 0, Get_Z_Construct_UEnum_ELITE_Game_EELEntranceNameplateCommentCompareType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EELEntranceNameplateCommentCompareType::None", (int64)EELEntranceNameplateCommentCompareType::None },
				{ "EELEntranceNameplateCommentCompareType::Equal", (int64)EELEntranceNameplateCommentCompareType::Equal },
				{ "EELEntranceNameplateCommentCompareType::EqualOver", (int64)EELEntranceNameplateCommentCompareType::EqualOver },
				{ "EELEntranceNameplateCommentCompareType::EqualUnder", (int64)EELEntranceNameplateCommentCompareType::EqualUnder },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Equal.Name", "EELEntranceNameplateCommentCompareType::Equal" },
				{ "EqualOver.Name", "EELEntranceNameplateCommentCompareType::EqualOver" },
				{ "EqualUnder.Name", "EELEntranceNameplateCommentCompareType::EqualUnder" },
				{ "ModuleRelativePath", "Public/EELEntranceNameplateCommentCompareType.h" },
				{ "None.Name", "EELEntranceNameplateCommentCompareType::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"EELEntranceNameplateCommentCompareType",
				"EELEntranceNameplateCommentCompareType",
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
