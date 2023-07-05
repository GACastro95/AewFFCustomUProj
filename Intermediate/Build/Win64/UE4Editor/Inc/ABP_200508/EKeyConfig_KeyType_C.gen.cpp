// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EKeyConfig_KeyType_C.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEKeyConfig_KeyType_C() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EKeyConfig_KeyType_C();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EKeyConfig_KeyType_C_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EKeyConfig_KeyType_C, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EKeyConfig_KeyType_C"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EKeyConfig_KeyType_C>()
	{
		return EKeyConfig_KeyType_C_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EKeyConfig_KeyType_C(EKeyConfig_KeyType_C_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EKeyConfig_KeyType_C"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EKeyConfig_KeyType_C_Hash() { return 2565539725U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EKeyConfig_KeyType_C()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EKeyConfig_KeyType_C"), 0, Get_Z_Construct_UEnum_ABP_200508_EKeyConfig_KeyType_C_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EKeyConfig_KeyType_C::LSTick", (int64)EKeyConfig_KeyType_C::LSTick },
				{ "EKeyConfig_KeyType_C::RSTick", (int64)EKeyConfig_KeyType_C::RSTick },
				{ "EKeyConfig_KeyType_C::D_Pad", (int64)EKeyConfig_KeyType_C::D_Pad },
				{ "EKeyConfig_KeyType_C::A", (int64)EKeyConfig_KeyType_C::A },
				{ "EKeyConfig_KeyType_C::B", (int64)EKeyConfig_KeyType_C::B },
				{ "EKeyConfig_KeyType_C::Y", (int64)EKeyConfig_KeyType_C::Y },
				{ "EKeyConfig_KeyType_C::X", (int64)EKeyConfig_KeyType_C::X },
				{ "EKeyConfig_KeyType_C::RB", (int64)EKeyConfig_KeyType_C::RB },
				{ "EKeyConfig_KeyType_C::LB", (int64)EKeyConfig_KeyType_C::LB },
				{ "EKeyConfig_KeyType_C::RT", (int64)EKeyConfig_KeyType_C::RT },
				{ "EKeyConfig_KeyType_C::LT", (int64)EKeyConfig_KeyType_C::LT },
				{ "EKeyConfig_KeyType_C::R3", (int64)EKeyConfig_KeyType_C::R3 },
				{ "EKeyConfig_KeyType_C::L3", (int64)EKeyConfig_KeyType_C::L3 },
				{ "EKeyConfig_KeyType_C::Start", (int64)EKeyConfig_KeyType_C::Start },
				{ "EKeyConfig_KeyType_C::Back", (int64)EKeyConfig_KeyType_C::Back },
				{ "EKeyConfig_KeyType_C::EKeyConfig_KeyType_MAX", (int64)EKeyConfig_KeyType_C::EKeyConfig_KeyType_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "A.Name", "EKeyConfig_KeyType_C::A" },
				{ "B.Name", "EKeyConfig_KeyType_C::B" },
				{ "Back.Name", "EKeyConfig_KeyType_C::Back" },
				{ "BlueprintType", "true" },
				{ "D_Pad.Name", "EKeyConfig_KeyType_C::D_Pad" },
				{ "EKeyConfig_KeyType_MAX.Hidden", "" },
				{ "EKeyConfig_KeyType_MAX.Name", "EKeyConfig_KeyType_C::EKeyConfig_KeyType_MAX" },
				{ "L3.Name", "EKeyConfig_KeyType_C::L3" },
				{ "LB.Name", "EKeyConfig_KeyType_C::LB" },
				{ "LSTick.Name", "EKeyConfig_KeyType_C::LSTick" },
				{ "LT.Name", "EKeyConfig_KeyType_C::LT" },
				{ "ModuleRelativePath", "Public/EKeyConfig_KeyType_C.h" },
				{ "R3.Name", "EKeyConfig_KeyType_C::R3" },
				{ "RB.Name", "EKeyConfig_KeyType_C::RB" },
				{ "RSTick.Name", "EKeyConfig_KeyType_C::RSTick" },
				{ "RT.Name", "EKeyConfig_KeyType_C::RT" },
				{ "Start.Name", "EKeyConfig_KeyType_C::Start" },
				{ "X.Name", "EKeyConfig_KeyType_C::X" },
				{ "Y.Name", "EKeyConfig_KeyType_C::Y" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EKeyConfig_KeyType_C",
				"EKeyConfig_KeyType_C",
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
