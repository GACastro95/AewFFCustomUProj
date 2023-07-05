// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EELVictoryCutsceneTransformAndAnimationMatchType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEELVictoryCutsceneTransformAndAnimationMatchType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELVictoryCutsceneTransformAndAnimationMatchType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EELVictoryCutsceneTransformAndAnimationMatchType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EELVictoryCutsceneTransformAndAnimationMatchType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EELVictoryCutsceneTransformAndAnimationMatchType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EELVictoryCutsceneTransformAndAnimationMatchType>()
	{
		return EELVictoryCutsceneTransformAndAnimationMatchType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EELVictoryCutsceneTransformAndAnimationMatchType(EELVictoryCutsceneTransformAndAnimationMatchType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EELVictoryCutsceneTransformAndAnimationMatchType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EELVictoryCutsceneTransformAndAnimationMatchType_Hash() { return 783303383U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EELVictoryCutsceneTransformAndAnimationMatchType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EELVictoryCutsceneTransformAndAnimationMatchType"), 0, Get_Z_Construct_UEnum_ABP_200508_EELVictoryCutsceneTransformAndAnimationMatchType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EELVictoryCutsceneTransformAndAnimationMatchType::None", (int64)EELVictoryCutsceneTransformAndAnimationMatchType::None },
				{ "EELVictoryCutsceneTransformAndAnimationMatchType::OneOnOne", (int64)EELVictoryCutsceneTransformAndAnimationMatchType::OneOnOne },
				{ "EELVictoryCutsceneTransformAndAnimationMatchType::TagTeamMatch", (int64)EELVictoryCutsceneTransformAndAnimationMatchType::TagTeamMatch },
				{ "EELVictoryCutsceneTransformAndAnimationMatchType::ThreeWay", (int64)EELVictoryCutsceneTransformAndAnimationMatchType::ThreeWay },
				{ "EELVictoryCutsceneTransformAndAnimationMatchType::FourWay", (int64)EELVictoryCutsceneTransformAndAnimationMatchType::FourWay },
				{ "EELVictoryCutsceneTransformAndAnimationMatchType::BattleRoyale", (int64)EELVictoryCutsceneTransformAndAnimationMatchType::BattleRoyale },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BattleRoyale.Name", "EELVictoryCutsceneTransformAndAnimationMatchType::BattleRoyale" },
				{ "BlueprintType", "true" },
				{ "FourWay.Name", "EELVictoryCutsceneTransformAndAnimationMatchType::FourWay" },
				{ "ModuleRelativePath", "Public/EELVictoryCutsceneTransformAndAnimationMatchType.h" },
				{ "None.Name", "EELVictoryCutsceneTransformAndAnimationMatchType::None" },
				{ "OneOnOne.Name", "EELVictoryCutsceneTransformAndAnimationMatchType::OneOnOne" },
				{ "TagTeamMatch.Name", "EELVictoryCutsceneTransformAndAnimationMatchType::TagTeamMatch" },
				{ "ThreeWay.Name", "EELVictoryCutsceneTransformAndAnimationMatchType::ThreeWay" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EELVictoryCutsceneTransformAndAnimationMatchType",
				"EELVictoryCutsceneTransformAndAnimationMatchType",
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
