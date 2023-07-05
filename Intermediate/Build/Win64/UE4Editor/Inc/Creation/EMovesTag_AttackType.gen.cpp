// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EMovesTag_AttackType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMovesTag_AttackType() {}
// Cross Module References
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EMovesTag_AttackType();
	UPackage* Z_Construct_UPackage__Script_Creation();
// End Cross Module References
	static UEnum* EMovesTag_AttackType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Creation_EMovesTag_AttackType, Z_Construct_UPackage__Script_Creation(), TEXT("EMovesTag_AttackType"));
		}
		return Singleton;
	}
	template<> CREATION_API UEnum* StaticEnum<EMovesTag_AttackType>()
	{
		return EMovesTag_AttackType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovesTag_AttackType(EMovesTag_AttackType_StaticEnum, TEXT("/Script/Creation"), TEXT("EMovesTag_AttackType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Creation_EMovesTag_AttackType_Hash() { return 2982486893U; }
	UEnum* Z_Construct_UEnum_Creation_EMovesTag_AttackType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovesTag_AttackType"), 0, Get_Z_Construct_UEnum_Creation_EMovesTag_AttackType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovesTag_AttackType::PEEK_ADDED_DEFAULT", (int64)EMovesTag_AttackType::PEEK_ADDED_DEFAULT },
				{ "EMovesTag_AttackType::AT_Fist", (int64)EMovesTag_AttackType::AT_Fist },
				{ "EMovesTag_AttackType::AT_Chop", (int64)EMovesTag_AttackType::AT_Chop },
				{ "EMovesTag_AttackType::AT_Elbow", (int64)EMovesTag_AttackType::AT_Elbow },
				{ "EMovesTag_AttackType::AT_Clothesline", (int64)EMovesTag_AttackType::AT_Clothesline },
				{ "EMovesTag_AttackType::AT_Kick", (int64)EMovesTag_AttackType::AT_Kick },
				{ "EMovesTag_AttackType::AT_Knee", (int64)EMovesTag_AttackType::AT_Knee },
				{ "EMovesTag_AttackType::AT_Head", (int64)EMovesTag_AttackType::AT_Head },
				{ "EMovesTag_AttackType::AT_Springboard", (int64)EMovesTag_AttackType::AT_Springboard },
				{ "EMovesTag_AttackType::AT_CornerDive", (int64)EMovesTag_AttackType::AT_CornerDive },
				{ "EMovesTag_AttackType::AT_Impact", (int64)EMovesTag_AttackType::AT_Impact },
				{ "EMovesTag_AttackType::AT_RunAtk", (int64)EMovesTag_AttackType::AT_RunAtk },
				{ "EMovesTag_AttackType::AT_BreakFeet", (int64)EMovesTag_AttackType::AT_BreakFeet },
				{ "EMovesTag_AttackType::AT_BreakArm", (int64)EMovesTag_AttackType::AT_BreakArm },
				{ "EMovesTag_AttackType::AT_Dirty", (int64)EMovesTag_AttackType::AT_Dirty },
				{ "EMovesTag_AttackType::AT_MAX", (int64)EMovesTag_AttackType::AT_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AT_BreakArm.Name", "EMovesTag_AttackType::AT_BreakArm" },
				{ "AT_BreakFeet.Name", "EMovesTag_AttackType::AT_BreakFeet" },
				{ "AT_Chop.Name", "EMovesTag_AttackType::AT_Chop" },
				{ "AT_Clothesline.Name", "EMovesTag_AttackType::AT_Clothesline" },
				{ "AT_CornerDive.Name", "EMovesTag_AttackType::AT_CornerDive" },
				{ "AT_Dirty.Name", "EMovesTag_AttackType::AT_Dirty" },
				{ "AT_Elbow.Name", "EMovesTag_AttackType::AT_Elbow" },
				{ "AT_Fist.Name", "EMovesTag_AttackType::AT_Fist" },
				{ "AT_Head.Name", "EMovesTag_AttackType::AT_Head" },
				{ "AT_Impact.Name", "EMovesTag_AttackType::AT_Impact" },
				{ "AT_Kick.Name", "EMovesTag_AttackType::AT_Kick" },
				{ "AT_Knee.Name", "EMovesTag_AttackType::AT_Knee" },
				{ "AT_MAX.Hidden", "" },
				{ "AT_MAX.Name", "EMovesTag_AttackType::AT_MAX" },
				{ "AT_RunAtk.Name", "EMovesTag_AttackType::AT_RunAtk" },
				{ "AT_Springboard.Name", "EMovesTag_AttackType::AT_Springboard" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EMovesTag_AttackType.h" },
				{ "PEEK_ADDED_DEFAULT.Name", "EMovesTag_AttackType::PEEK_ADDED_DEFAULT" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Creation,
				nullptr,
				"EMovesTag_AttackType",
				"EMovesTag_AttackType",
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
