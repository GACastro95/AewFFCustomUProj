// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EDamageReactionType_N.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDamageReactionType_N() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EDamageReactionType_N();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EDamageReactionType_N_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EDamageReactionType_N, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EDamageReactionType_N"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EDamageReactionType_N>()
	{
		return EDamageReactionType_N_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDamageReactionType_N(EDamageReactionType_N_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EDamageReactionType_N"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EDamageReactionType_N_Hash() { return 3611195745U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EDamageReactionType_N()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDamageReactionType_N"), 0, Get_Z_Construct_UEnum_ABP_200508_EDamageReactionType_N_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDamageReactionType_N::None", (int64)EDamageReactionType_N::None },
				{ "EDamageReactionType_N::Head", (int64)EDamageReactionType_N::Head },
				{ "EDamageReactionType_N::Arm_R", (int64)EDamageReactionType_N::Arm_R },
				{ "EDamageReactionType_N::Arm_L", (int64)EDamageReactionType_N::Arm_L },
				{ "EDamageReactionType_N::Body_F", (int64)EDamageReactionType_N::Body_F },
				{ "EDamageReactionType_N::Body_B", (int64)EDamageReactionType_N::Body_B },
				{ "EDamageReactionType_N::Leg_R", (int64)EDamageReactionType_N::Leg_R },
				{ "EDamageReactionType_N::Leg_L", (int64)EDamageReactionType_N::Leg_L },
				{ "EDamageReactionType_N::EDamageReactionType_MAX", (int64)EDamageReactionType_N::EDamageReactionType_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Arm_L.Name", "EDamageReactionType_N::Arm_L" },
				{ "Arm_R.Name", "EDamageReactionType_N::Arm_R" },
				{ "BlueprintType", "true" },
				{ "Body_B.Name", "EDamageReactionType_N::Body_B" },
				{ "Body_F.Name", "EDamageReactionType_N::Body_F" },
				{ "EDamageReactionType_MAX.Hidden", "" },
				{ "EDamageReactionType_MAX.Name", "EDamageReactionType_N::EDamageReactionType_MAX" },
				{ "Head.Name", "EDamageReactionType_N::Head" },
				{ "Leg_L.Name", "EDamageReactionType_N::Leg_L" },
				{ "Leg_R.Name", "EDamageReactionType_N::Leg_R" },
				{ "ModuleRelativePath", "Public/EDamageReactionType_N.h" },
				{ "None.Name", "EDamageReactionType_N::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EDamageReactionType_N",
				"EDamageReactionType_N",
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
