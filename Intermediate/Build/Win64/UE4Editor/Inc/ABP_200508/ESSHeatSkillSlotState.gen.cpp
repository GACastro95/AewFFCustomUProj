// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSHeatSkillSlotState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSHeatSkillSlotState() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSHeatSkillSlotState();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSHeatSkillSlotState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSHeatSkillSlotState, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSHeatSkillSlotState"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSHeatSkillSlotState>()
	{
		return ESSHeatSkillSlotState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSHeatSkillSlotState(ESSHeatSkillSlotState_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSHeatSkillSlotState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSHeatSkillSlotState_Hash() { return 2480229897U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSHeatSkillSlotState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSHeatSkillSlotState"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSHeatSkillSlotState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSHeatSkillSlotState::Blank", (int64)ESSHeatSkillSlotState::Blank },
				{ "ESSHeatSkillSlotState::A", (int64)ESSHeatSkillSlotState::A },
				{ "ESSHeatSkillSlotState::B", (int64)ESSHeatSkillSlotState::B },
				{ "ESSHeatSkillSlotState::C", (int64)ESSHeatSkillSlotState::C },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "A.Name", "ESSHeatSkillSlotState::A" },
				{ "B.Name", "ESSHeatSkillSlotState::B" },
				{ "Blank.Name", "ESSHeatSkillSlotState::Blank" },
				{ "BlueprintType", "true" },
				{ "C.Name", "ESSHeatSkillSlotState::C" },
				{ "ModuleRelativePath", "Public/ESSHeatSkillSlotState.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSHeatSkillSlotState",
				"ESSHeatSkillSlotState",
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
