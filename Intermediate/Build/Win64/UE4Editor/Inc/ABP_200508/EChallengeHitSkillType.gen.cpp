// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EChallengeHitSkillType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEChallengeHitSkillType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EChallengeHitSkillType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EChallengeHitSkillType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EChallengeHitSkillType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EChallengeHitSkillType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EChallengeHitSkillType>()
	{
		return EChallengeHitSkillType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EChallengeHitSkillType(EChallengeHitSkillType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EChallengeHitSkillType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EChallengeHitSkillType_Hash() { return 1725323952U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EChallengeHitSkillType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EChallengeHitSkillType"), 0, Get_Z_Construct_UEnum_ABP_200508_EChallengeHitSkillType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EChallengeHitSkillType::None", (int64)EChallengeHitSkillType::None },
				{ "EChallengeHitSkillType::WeakBlow", (int64)EChallengeHitSkillType::WeakBlow },
				{ "EChallengeHitSkillType::StrongBlow", (int64)EChallengeHitSkillType::StrongBlow },
				{ "EChallengeHitSkillType::DashBlow", (int64)EChallengeHitSkillType::DashBlow },
				{ "EChallengeHitSkillType::DivingBlow", (int64)EChallengeHitSkillType::DivingBlow },
				{ "EChallengeHitSkillType::FrontWeakGrab", (int64)EChallengeHitSkillType::FrontWeakGrab },
				{ "EChallengeHitSkillType::FrontStrongGrab", (int64)EChallengeHitSkillType::FrontStrongGrab },
				{ "EChallengeHitSkillType::BehindWeakGrab", (int64)EChallengeHitSkillType::BehindWeakGrab },
				{ "EChallengeHitSkillType::BehindStrongGrab", (int64)EChallengeHitSkillType::BehindStrongGrab },
				{ "EChallengeHitSkillType::WeaponAttack", (int64)EChallengeHitSkillType::WeaponAttack },
				{ "EChallengeHitSkillType::ThrewOpponentWhoCamebackFromRope", (int64)EChallengeHitSkillType::ThrewOpponentWhoCamebackFromRope },
				{ "EChallengeHitSkillType::BlowOpponentWhoCamebackFromRope", (int64)EChallengeHitSkillType::BlowOpponentWhoCamebackFromRope },
				{ "EChallengeHitSkillType::GrabToTheOpponentWhoWentDown", (int64)EChallengeHitSkillType::GrabToTheOpponentWhoWentDown },
				{ "EChallengeHitSkillType::CompletedTheTaunt", (int64)EChallengeHitSkillType::CompletedTheTaunt },
				{ "EChallengeHitSkillType::BecameFinisher", (int64)EChallengeHitSkillType::BecameFinisher },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BecameFinisher.Name", "EChallengeHitSkillType::BecameFinisher" },
				{ "BehindStrongGrab.Name", "EChallengeHitSkillType::BehindStrongGrab" },
				{ "BehindWeakGrab.Name", "EChallengeHitSkillType::BehindWeakGrab" },
				{ "BlowOpponentWhoCamebackFromRope.Name", "EChallengeHitSkillType::BlowOpponentWhoCamebackFromRope" },
				{ "BlueprintType", "true" },
				{ "CompletedTheTaunt.Name", "EChallengeHitSkillType::CompletedTheTaunt" },
				{ "DashBlow.Name", "EChallengeHitSkillType::DashBlow" },
				{ "DivingBlow.Name", "EChallengeHitSkillType::DivingBlow" },
				{ "FrontStrongGrab.Name", "EChallengeHitSkillType::FrontStrongGrab" },
				{ "FrontWeakGrab.Name", "EChallengeHitSkillType::FrontWeakGrab" },
				{ "GrabToTheOpponentWhoWentDown.Name", "EChallengeHitSkillType::GrabToTheOpponentWhoWentDown" },
				{ "ModuleRelativePath", "Public/EChallengeHitSkillType.h" },
				{ "None.Name", "EChallengeHitSkillType::None" },
				{ "StrongBlow.Name", "EChallengeHitSkillType::StrongBlow" },
				{ "ThrewOpponentWhoCamebackFromRope.Name", "EChallengeHitSkillType::ThrewOpponentWhoCamebackFromRope" },
				{ "WeakBlow.Name", "EChallengeHitSkillType::WeakBlow" },
				{ "WeaponAttack.Name", "EChallengeHitSkillType::WeaponAttack" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EChallengeHitSkillType",
				"EChallengeHitSkillType",
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
