// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerMemberType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerMemberType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerMemberType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerMemberType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerMemberType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerMemberType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerMemberType>()
	{
		return ECareerMemberType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerMemberType(ECareerMemberType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerMemberType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerMemberType_Hash() { return 1982746611U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerMemberType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerMemberType"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerMemberType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerMemberType::NONE", (int64)ECareerMemberType::NONE },
				{ "ECareerMemberType::PLAYER", (int64)ECareerMemberType::PLAYER },
				{ "ECareerMemberType::PARTNER", (int64)ECareerMemberType::PARTNER },
				{ "ECareerMemberType::RIVAL", (int64)ECareerMemberType::RIVAL },
				{ "ECareerMemberType::DATE", (int64)ECareerMemberType::DATE },
				{ "ECareerMemberType::OPPONENTA", (int64)ECareerMemberType::OPPONENTA },
				{ "ECareerMemberType::OPPONENTB", (int64)ECareerMemberType::OPPONENTB },
				{ "ECareerMemberType::OPPONENTC", (int64)ECareerMemberType::OPPONENTC },
				{ "ECareerMemberType::OPPONENTD", (int64)ECareerMemberType::OPPONENTD },
				{ "ECareerMemberType::DIRECT", (int64)ECareerMemberType::DIRECT },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DATE.Name", "ECareerMemberType::DATE" },
				{ "DIRECT.Name", "ECareerMemberType::DIRECT" },
				{ "ModuleRelativePath", "Public/ECareerMemberType.h" },
				{ "NONE.Name", "ECareerMemberType::NONE" },
				{ "OPPONENTA.Name", "ECareerMemberType::OPPONENTA" },
				{ "OPPONENTB.Name", "ECareerMemberType::OPPONENTB" },
				{ "OPPONENTC.Name", "ECareerMemberType::OPPONENTC" },
				{ "OPPONENTD.Name", "ECareerMemberType::OPPONENTD" },
				{ "PARTNER.Name", "ECareerMemberType::PARTNER" },
				{ "PLAYER.Name", "ECareerMemberType::PLAYER" },
				{ "RIVAL.Name", "ECareerMemberType::RIVAL" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerMemberType",
				"ECareerMemberType",
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
