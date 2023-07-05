// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSButtonHold.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSButtonHold() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSButtonHold();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSButtonHold_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSButtonHold, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSButtonHold"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSButtonHold>()
	{
		return ESSButtonHold_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSButtonHold(ESSButtonHold_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSButtonHold"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSButtonHold_Hash() { return 681252161U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSButtonHold()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSButtonHold"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSButtonHold_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSButtonHold::Punch", (int64)ESSButtonHold::Punch },
				{ "ESSButtonHold::Kick", (int64)ESSButtonHold::Kick },
				{ "ESSButtonHold::Grapple", (int64)ESSButtonHold::Grapple },
				{ "ESSButtonHold::Interact", (int64)ESSButtonHold::Interact },
				{ "ESSButtonHold::Max", (int64)ESSButtonHold::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Grapple.Name", "ESSButtonHold::Grapple" },
				{ "Interact.Name", "ESSButtonHold::Interact" },
				{ "Kick.Name", "ESSButtonHold::Kick" },
				{ "Max.Name", "ESSButtonHold::Max" },
				{ "ModuleRelativePath", "Public/ESSButtonHold.h" },
				{ "Punch.Name", "ESSButtonHold::Punch" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSButtonHold",
				"ESSButtonHold",
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
