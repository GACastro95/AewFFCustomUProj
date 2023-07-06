// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerOtherMenuState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerOtherMenuState() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerOtherMenuState();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerOtherMenuState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerOtherMenuState, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerOtherMenuState"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerOtherMenuState>()
	{
		return ECareerOtherMenuState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerOtherMenuState(ECareerOtherMenuState_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerOtherMenuState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerOtherMenuState_Hash() { return 901822073U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerOtherMenuState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerOtherMenuState"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerOtherMenuState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerOtherMenuState::None", (int64)ECareerOtherMenuState::None },
				{ "ECareerOtherMenuState::Start", (int64)ECareerOtherMenuState::Start },
				{ "ECareerOtherMenuState::Playing", (int64)ECareerOtherMenuState::Playing },
				{ "ECareerOtherMenuState::Finish", (int64)ECareerOtherMenuState::Finish },
				{ "ECareerOtherMenuState::End", (int64)ECareerOtherMenuState::End },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "End.Name", "ECareerOtherMenuState::End" },
				{ "Finish.Name", "ECareerOtherMenuState::Finish" },
				{ "ModuleRelativePath", "Public/ECareerOtherMenuState.h" },
				{ "None.Name", "ECareerOtherMenuState::None" },
				{ "Playing.Name", "ECareerOtherMenuState::Playing" },
				{ "Start.Name", "ECareerOtherMenuState::Start" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerOtherMenuState",
				"ECareerOtherMenuState",
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