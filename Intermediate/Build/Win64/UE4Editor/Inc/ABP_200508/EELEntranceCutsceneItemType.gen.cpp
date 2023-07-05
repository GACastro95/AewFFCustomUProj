// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EELEntranceCutsceneItemType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEELEntranceCutsceneItemType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELEntranceCutsceneItemType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EELEntranceCutsceneItemType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EELEntranceCutsceneItemType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EELEntranceCutsceneItemType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EELEntranceCutsceneItemType>()
	{
		return EELEntranceCutsceneItemType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EELEntranceCutsceneItemType(EELEntranceCutsceneItemType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EELEntranceCutsceneItemType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EELEntranceCutsceneItemType_Hash() { return 1048186074U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EELEntranceCutsceneItemType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EELEntranceCutsceneItemType"), 0, Get_Z_Construct_UEnum_ABP_200508_EELEntranceCutsceneItemType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EELEntranceCutsceneItemType::Unknown", (int64)EELEntranceCutsceneItemType::Unknown },
				{ "EELEntranceCutsceneItemType::Animation", (int64)EELEntranceCutsceneItemType::Animation },
				{ "EELEntranceCutsceneItemType::FingerSign", (int64)EELEntranceCutsceneItemType::FingerSign },
				{ "EELEntranceCutsceneItemType::Weapon", (int64)EELEntranceCutsceneItemType::Weapon },
				{ "EELEntranceCutsceneItemType::Filter", (int64)EELEntranceCutsceneItemType::Filter },
				{ "EELEntranceCutsceneItemType::Particle", (int64)EELEntranceCutsceneItemType::Particle },
				{ "EELEntranceCutsceneItemType::BGModel", (int64)EELEntranceCutsceneItemType::BGModel },
				{ "EELEntranceCutsceneItemType::Music", (int64)EELEntranceCutsceneItemType::Music },
				{ "EELEntranceCutsceneItemType::Movie", (int64)EELEntranceCutsceneItemType::Movie },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Animation.Name", "EELEntranceCutsceneItemType::Animation" },
				{ "BGModel.Name", "EELEntranceCutsceneItemType::BGModel" },
				{ "BlueprintType", "true" },
				{ "Filter.Name", "EELEntranceCutsceneItemType::Filter" },
				{ "FingerSign.Name", "EELEntranceCutsceneItemType::FingerSign" },
				{ "ModuleRelativePath", "Public/EELEntranceCutsceneItemType.h" },
				{ "Movie.Name", "EELEntranceCutsceneItemType::Movie" },
				{ "Music.Name", "EELEntranceCutsceneItemType::Music" },
				{ "Particle.Name", "EELEntranceCutsceneItemType::Particle" },
				{ "Unknown.Name", "EELEntranceCutsceneItemType::Unknown" },
				{ "Weapon.Name", "EELEntranceCutsceneItemType::Weapon" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EELEntranceCutsceneItemType",
				"EELEntranceCutsceneItemType",
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
