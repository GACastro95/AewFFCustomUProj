// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerCityMoveState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerCityMoveState() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerCityMoveState();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerCityMoveState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerCityMoveState, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerCityMoveState"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerCityMoveState>()
	{
		return ECareerCityMoveState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerCityMoveState(ECareerCityMoveState_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerCityMoveState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerCityMoveState_Hash() { return 2994930650U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerCityMoveState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerCityMoveState"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerCityMoveState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerCityMoveState::None", (int64)ECareerCityMoveState::None },
				{ "ECareerCityMoveState::MoveDirAdjust", (int64)ECareerCityMoveState::MoveDirAdjust },
				{ "ECareerCityMoveState::WaitStartMove", (int64)ECareerCityMoveState::WaitStartMove },
				{ "ECareerCityMoveState::Moving", (int64)ECareerCityMoveState::Moving },
				{ "ECareerCityMoveState::WaitStopArrive", (int64)ECareerCityMoveState::WaitStopArrive },
				{ "ECareerCityMoveState::Arrive", (int64)ECareerCityMoveState::Arrive },
				{ "ECareerCityMoveState::End", (int64)ECareerCityMoveState::End },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Arrive.Name", "ECareerCityMoveState::Arrive" },
				{ "BlueprintType", "true" },
				{ "End.Name", "ECareerCityMoveState::End" },
				{ "ModuleRelativePath", "Public/ECareerCityMoveState.h" },
				{ "MoveDirAdjust.Name", "ECareerCityMoveState::MoveDirAdjust" },
				{ "Moving.Name", "ECareerCityMoveState::Moving" },
				{ "None.Name", "ECareerCityMoveState::None" },
				{ "WaitStartMove.Name", "ECareerCityMoveState::WaitStartMove" },
				{ "WaitStopArrive.Name", "ECareerCityMoveState::WaitStopArrive" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerCityMoveState",
				"ECareerCityMoveState",
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
