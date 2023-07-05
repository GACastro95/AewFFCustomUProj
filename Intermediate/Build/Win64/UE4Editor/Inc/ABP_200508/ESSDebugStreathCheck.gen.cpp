// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSDebugStreathCheck.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSDebugStreathCheck() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSDebugStreathCheck();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSDebugStreathCheck_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSDebugStreathCheck, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSDebugStreathCheck"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSDebugStreathCheck>()
	{
		return ESSDebugStreathCheck_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSDebugStreathCheck(ESSDebugStreathCheck_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSDebugStreathCheck"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSDebugStreathCheck_Hash() { return 4110508800U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSDebugStreathCheck()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSDebugStreathCheck"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSDebugStreathCheck_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSDebugStreathCheck::None", (int64)ESSDebugStreathCheck::None },
				{ "ESSDebugStreathCheck::TypeA", (int64)ESSDebugStreathCheck::TypeA },
				{ "ESSDebugStreathCheck::TypeB", (int64)ESSDebugStreathCheck::TypeB },
				{ "ESSDebugStreathCheck::TypeC", (int64)ESSDebugStreathCheck::TypeC },
				{ "ESSDebugStreathCheck::TypeD", (int64)ESSDebugStreathCheck::TypeD },
				{ "ESSDebugStreathCheck::TypeE", (int64)ESSDebugStreathCheck::TypeE },
				{ "ESSDebugStreathCheck::TypeF", (int64)ESSDebugStreathCheck::TypeF },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ESSDebugStreathCheck.h" },
				{ "None.Name", "ESSDebugStreathCheck::None" },
				{ "TypeA.Name", "ESSDebugStreathCheck::TypeA" },
				{ "TypeB.Name", "ESSDebugStreathCheck::TypeB" },
				{ "TypeC.Name", "ESSDebugStreathCheck::TypeC" },
				{ "TypeD.Name", "ESSDebugStreathCheck::TypeD" },
				{ "TypeE.Name", "ESSDebugStreathCheck::TypeE" },
				{ "TypeF.Name", "ESSDebugStreathCheck::TypeF" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSDebugStreathCheck",
				"ESSDebugStreathCheck",
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
