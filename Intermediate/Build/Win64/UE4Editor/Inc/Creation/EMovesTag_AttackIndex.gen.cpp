// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EMovesTag_AttackIndex.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMovesTag_AttackIndex() {}
// Cross Module References
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EMovesTag_AttackIndex();
	UPackage* Z_Construct_UPackage__Script_Creation();
// End Cross Module References
	static UEnum* EMovesTag_AttackIndex_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Creation_EMovesTag_AttackIndex, Z_Construct_UPackage__Script_Creation(), TEXT("EMovesTag_AttackIndex"));
		}
		return Singleton;
	}
	template<> CREATION_API UEnum* StaticEnum<EMovesTag_AttackIndex>()
	{
		return EMovesTag_AttackIndex_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovesTag_AttackIndex(EMovesTag_AttackIndex_StaticEnum, TEXT("/Script/Creation"), TEXT("EMovesTag_AttackIndex"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Creation_EMovesTag_AttackIndex_Hash() { return 2219793755U; }
	UEnum* Z_Construct_UEnum_Creation_EMovesTag_AttackIndex()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovesTag_AttackIndex"), 0, Get_Z_Construct_UEnum_Creation_EMovesTag_AttackIndex_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovesTag_AttackIndex::AT_Fist", (int64)EMovesTag_AttackIndex::AT_Fist },
				{ "EMovesTag_AttackIndex::AT_Chop", (int64)EMovesTag_AttackIndex::AT_Chop },
				{ "EMovesTag_AttackIndex::AT_Elbow", (int64)EMovesTag_AttackIndex::AT_Elbow },
				{ "EMovesTag_AttackIndex::AT_Clothesline", (int64)EMovesTag_AttackIndex::AT_Clothesline },
				{ "EMovesTag_AttackIndex::AT_Kick", (int64)EMovesTag_AttackIndex::AT_Kick },
				{ "EMovesTag_AttackIndex::AT_Knee", (int64)EMovesTag_AttackIndex::AT_Knee },
				{ "EMovesTag_AttackIndex::AT_Head", (int64)EMovesTag_AttackIndex::AT_Head },
				{ "EMovesTag_AttackIndex::AT_Springboard", (int64)EMovesTag_AttackIndex::AT_Springboard },
				{ "EMovesTag_AttackIndex::AT_CornerDive", (int64)EMovesTag_AttackIndex::AT_CornerDive },
				{ "EMovesTag_AttackIndex::AT_Impact", (int64)EMovesTag_AttackIndex::AT_Impact },
				{ "EMovesTag_AttackIndex::AT_RunAtk", (int64)EMovesTag_AttackIndex::AT_RunAtk },
				{ "EMovesTag_AttackIndex::AT_BreakFeet", (int64)EMovesTag_AttackIndex::AT_BreakFeet },
				{ "EMovesTag_AttackIndex::AT_BreakArm", (int64)EMovesTag_AttackIndex::AT_BreakArm },
				{ "EMovesTag_AttackIndex::AT_Dirty", (int64)EMovesTag_AttackIndex::AT_Dirty },
				{ "EMovesTag_AttackIndex::AT_MAX", (int64)EMovesTag_AttackIndex::AT_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AT_BreakArm.Name", "EMovesTag_AttackIndex::AT_BreakArm" },
				{ "AT_BreakFeet.Name", "EMovesTag_AttackIndex::AT_BreakFeet" },
				{ "AT_Chop.Name", "EMovesTag_AttackIndex::AT_Chop" },
				{ "AT_Clothesline.Name", "EMovesTag_AttackIndex::AT_Clothesline" },
				{ "AT_CornerDive.Name", "EMovesTag_AttackIndex::AT_CornerDive" },
				{ "AT_Dirty.Name", "EMovesTag_AttackIndex::AT_Dirty" },
				{ "AT_Elbow.Name", "EMovesTag_AttackIndex::AT_Elbow" },
				{ "AT_Fist.Name", "EMovesTag_AttackIndex::AT_Fist" },
				{ "AT_Head.Name", "EMovesTag_AttackIndex::AT_Head" },
				{ "AT_Impact.Name", "EMovesTag_AttackIndex::AT_Impact" },
				{ "AT_Kick.Name", "EMovesTag_AttackIndex::AT_Kick" },
				{ "AT_Knee.Name", "EMovesTag_AttackIndex::AT_Knee" },
				{ "AT_MAX.Hidden", "" },
				{ "AT_MAX.Name", "EMovesTag_AttackIndex::AT_MAX" },
				{ "AT_RunAtk.Name", "EMovesTag_AttackIndex::AT_RunAtk" },
				{ "AT_Springboard.Name", "EMovesTag_AttackIndex::AT_Springboard" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EMovesTag_AttackIndex.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Creation,
				nullptr,
				"EMovesTag_AttackIndex",
				"EMovesTag_AttackIndex",
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
