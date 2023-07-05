// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerCutsceneMessageCastType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerCutsceneMessageCastType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerCutsceneMessageCastType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerCutsceneMessageCastType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerCutsceneMessageCastType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerCutsceneMessageCastType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerCutsceneMessageCastType>()
	{
		return ECareerCutsceneMessageCastType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerCutsceneMessageCastType(ECareerCutsceneMessageCastType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerCutsceneMessageCastType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerCutsceneMessageCastType_Hash() { return 2485219808U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerCutsceneMessageCastType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerCutsceneMessageCastType"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerCutsceneMessageCastType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerCutsceneMessageCastType::NONE", (int64)ECareerCutsceneMessageCastType::NONE },
				{ "ECareerCutsceneMessageCastType::OPPONENTA", (int64)ECareerCutsceneMessageCastType::OPPONENTA },
				{ "ECareerCutsceneMessageCastType::OPPONENTB", (int64)ECareerCutsceneMessageCastType::OPPONENTB },
				{ "ECareerCutsceneMessageCastType::OPPONENTC", (int64)ECareerCutsceneMessageCastType::OPPONENTC },
				{ "ECareerCutsceneMessageCastType::OPPONENTD", (int64)ECareerCutsceneMessageCastType::OPPONENTD },
				{ "ECareerCutsceneMessageCastType::PLAYER", (int64)ECareerCutsceneMessageCastType::PLAYER },
				{ "ECareerCutsceneMessageCastType::PARTNER", (int64)ECareerCutsceneMessageCastType::PARTNER },
				{ "ECareerCutsceneMessageCastType::RIVAL", (int64)ECareerCutsceneMessageCastType::RIVAL },
				{ "ECareerCutsceneMessageCastType::DATE", (int64)ECareerCutsceneMessageCastType::DATE },
				{ "ECareerCutsceneMessageCastType::COMMENTATOR", (int64)ECareerCutsceneMessageCastType::COMMENTATOR },
				{ "ECareerCutsceneMessageCastType::JR", (int64)ECareerCutsceneMessageCastType::JR },
				{ "ECareerCutsceneMessageCastType::EX", (int64)ECareerCutsceneMessageCastType::EX },
				{ "ECareerCutsceneMessageCastType::TZ", (int64)ECareerCutsceneMessageCastType::TZ },
				{ "ECareerCutsceneMessageCastType::TK", (int64)ECareerCutsceneMessageCastType::TK },
				{ "ECareerCutsceneMessageCastType::UN", (int64)ECareerCutsceneMessageCastType::UN },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "COMMENTATOR.Name", "ECareerCutsceneMessageCastType::COMMENTATOR" },
				{ "DATE.Name", "ECareerCutsceneMessageCastType::DATE" },
				{ "EX.Name", "ECareerCutsceneMessageCastType::EX" },
				{ "JR.Name", "ECareerCutsceneMessageCastType::JR" },
				{ "ModuleRelativePath", "Public/ECareerCutsceneMessageCastType.h" },
				{ "NONE.Name", "ECareerCutsceneMessageCastType::NONE" },
				{ "OPPONENTA.Name", "ECareerCutsceneMessageCastType::OPPONENTA" },
				{ "OPPONENTB.Name", "ECareerCutsceneMessageCastType::OPPONENTB" },
				{ "OPPONENTC.Name", "ECareerCutsceneMessageCastType::OPPONENTC" },
				{ "OPPONENTD.Name", "ECareerCutsceneMessageCastType::OPPONENTD" },
				{ "PARTNER.Name", "ECareerCutsceneMessageCastType::PARTNER" },
				{ "PLAYER.Name", "ECareerCutsceneMessageCastType::PLAYER" },
				{ "RIVAL.Name", "ECareerCutsceneMessageCastType::RIVAL" },
				{ "TK.Name", "ECareerCutsceneMessageCastType::TK" },
				{ "TZ.Name", "ECareerCutsceneMessageCastType::TZ" },
				{ "UN.Name", "ECareerCutsceneMessageCastType::UN" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerCutsceneMessageCastType",
				"ECareerCutsceneMessageCastType",
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
