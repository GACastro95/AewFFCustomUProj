// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerEventActionMember.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerEventActionMember() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerEventActionMember();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerEventActionMember_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerEventActionMember, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerEventActionMember"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerEventActionMember>()
	{
		return ECareerEventActionMember_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerEventActionMember(ECareerEventActionMember_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerEventActionMember"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerEventActionMember_Hash() { return 4256053295U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerEventActionMember()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerEventActionMember"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerEventActionMember_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerEventActionMember::NONE", (int64)ECareerEventActionMember::NONE },
				{ "ECareerEventActionMember::A", (int64)ECareerEventActionMember::A },
				{ "ECareerEventActionMember::B", (int64)ECareerEventActionMember::B },
				{ "ECareerEventActionMember::C", (int64)ECareerEventActionMember::C },
				{ "ECareerEventActionMember::D", (int64)ECareerEventActionMember::D },
				{ "ECareerEventActionMember::JR", (int64)ECareerEventActionMember::JR },
				{ "ECareerEventActionMember::EX", (int64)ECareerEventActionMember::EX },
				{ "ECareerEventActionMember::TZ", (int64)ECareerEventActionMember::TZ },
				{ "ECareerEventActionMember::TK", (int64)ECareerEventActionMember::TK },
				{ "ECareerEventActionMember::UN", (int64)ECareerEventActionMember::UN },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "A.Name", "ECareerEventActionMember::A" },
				{ "B.Name", "ECareerEventActionMember::B" },
				{ "BlueprintType", "true" },
				{ "C.Name", "ECareerEventActionMember::C" },
				{ "D.Name", "ECareerEventActionMember::D" },
				{ "EX.Name", "ECareerEventActionMember::EX" },
				{ "JR.Name", "ECareerEventActionMember::JR" },
				{ "ModuleRelativePath", "Public/ECareerEventActionMember.h" },
				{ "NONE.Name", "ECareerEventActionMember::NONE" },
				{ "TK.Name", "ECareerEventActionMember::TK" },
				{ "TZ.Name", "ECareerEventActionMember::TZ" },
				{ "UN.Name", "ECareerEventActionMember::UN" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerEventActionMember",
				"ECareerEventActionMember",
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
