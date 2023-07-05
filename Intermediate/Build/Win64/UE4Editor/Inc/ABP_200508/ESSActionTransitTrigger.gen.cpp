// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSActionTransitTrigger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSActionTransitTrigger() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSActionTransitTrigger();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSActionTransitTrigger_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSActionTransitTrigger, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSActionTransitTrigger"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSActionTransitTrigger>()
	{
		return ESSActionTransitTrigger_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSActionTransitTrigger(ESSActionTransitTrigger_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSActionTransitTrigger"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSActionTransitTrigger_Hash() { return 408575211U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSActionTransitTrigger()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSActionTransitTrigger"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSActionTransitTrigger_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSActionTransitTrigger::None", (int64)ESSActionTransitTrigger::None },
				{ "ESSActionTransitTrigger::Move", (int64)ESSActionTransitTrigger::Move },
				{ "ESSActionTransitTrigger::Land", (int64)ESSActionTransitTrigger::Land },
				{ "ESSActionTransitTrigger::Jump", (int64)ESSActionTransitTrigger::Jump },
				{ "ESSActionTransitTrigger::RunJump", (int64)ESSActionTransitTrigger::RunJump },
				{ "ESSActionTransitTrigger::Guard", (int64)ESSActionTransitTrigger::Guard },
				{ "ESSActionTransitTrigger::StartAttack", (int64)ESSActionTransitTrigger::StartAttack },
				{ "ESSActionTransitTrigger::StartTapAttack", (int64)ESSActionTransitTrigger::StartTapAttack },
				{ "ESSActionTransitTrigger::Punch", (int64)ESSActionTransitTrigger::Punch },
				{ "ESSActionTransitTrigger::Kick", (int64)ESSActionTransitTrigger::Kick },
				{ "ESSActionTransitTrigger::Grapple", (int64)ESSActionTransitTrigger::Grapple },
				{ "ESSActionTransitTrigger::DashPunch", (int64)ESSActionTransitTrigger::DashPunch },
				{ "ESSActionTransitTrigger::DashKick", (int64)ESSActionTransitTrigger::DashKick },
				{ "ESSActionTransitTrigger::DashGrapple", (int64)ESSActionTransitTrigger::DashGrapple },
				{ "ESSActionTransitTrigger::EndTapAttack", (int64)ESSActionTransitTrigger::EndTapAttack },
				{ "ESSActionTransitTrigger::StartLongAttack", (int64)ESSActionTransitTrigger::StartLongAttack },
				{ "ESSActionTransitTrigger::PunchLong", (int64)ESSActionTransitTrigger::PunchLong },
				{ "ESSActionTransitTrigger::KickLong", (int64)ESSActionTransitTrigger::KickLong },
				{ "ESSActionTransitTrigger::GrappleLong", (int64)ESSActionTransitTrigger::GrappleLong },
				{ "ESSActionTransitTrigger::DashPunchLong", (int64)ESSActionTransitTrigger::DashPunchLong },
				{ "ESSActionTransitTrigger::DashKickLong", (int64)ESSActionTransitTrigger::DashKickLong },
				{ "ESSActionTransitTrigger::DashGrappleLong", (int64)ESSActionTransitTrigger::DashGrappleLong },
				{ "ESSActionTransitTrigger::EndLongAttack", (int64)ESSActionTransitTrigger::EndLongAttack },
				{ "ESSActionTransitTrigger::StartAbilityMove", (int64)ESSActionTransitTrigger::StartAbilityMove },
				{ "ESSActionTransitTrigger::AbilityMove1", (int64)ESSActionTransitTrigger::AbilityMove1 },
				{ "ESSActionTransitTrigger::AbilityMove2", (int64)ESSActionTransitTrigger::AbilityMove2 },
				{ "ESSActionTransitTrigger::AbilityMove3", (int64)ESSActionTransitTrigger::AbilityMove3 },
				{ "ESSActionTransitTrigger::EndAbilityMove", (int64)ESSActionTransitTrigger::EndAbilityMove },
				{ "ESSActionTransitTrigger::EndAttack", (int64)ESSActionTransitTrigger::EndAttack },
				{ "ESSActionTransitTrigger::Taunt", (int64)ESSActionTransitTrigger::Taunt },
				{ "ESSActionTransitTrigger::Revive", (int64)ESSActionTransitTrigger::Revive },
				{ "ESSActionTransitTrigger::Max", (int64)ESSActionTransitTrigger::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AbilityMove1.Name", "ESSActionTransitTrigger::AbilityMove1" },
				{ "AbilityMove2.Name", "ESSActionTransitTrigger::AbilityMove2" },
				{ "AbilityMove3.Name", "ESSActionTransitTrigger::AbilityMove3" },
				{ "BlueprintType", "true" },
				{ "DashGrapple.Name", "ESSActionTransitTrigger::DashGrapple" },
				{ "DashGrappleLong.Name", "ESSActionTransitTrigger::DashGrappleLong" },
				{ "DashKick.Name", "ESSActionTransitTrigger::DashKick" },
				{ "DashKickLong.Name", "ESSActionTransitTrigger::DashKickLong" },
				{ "DashPunch.Name", "ESSActionTransitTrigger::DashPunch" },
				{ "DashPunchLong.Name", "ESSActionTransitTrigger::DashPunchLong" },
				{ "EndAbilityMove.Name", "ESSActionTransitTrigger::EndAbilityMove" },
				{ "EndAttack.Name", "ESSActionTransitTrigger::EndAttack" },
				{ "EndLongAttack.Name", "ESSActionTransitTrigger::EndLongAttack" },
				{ "EndTapAttack.Name", "ESSActionTransitTrigger::EndTapAttack" },
				{ "Grapple.Name", "ESSActionTransitTrigger::Grapple" },
				{ "GrappleLong.Name", "ESSActionTransitTrigger::GrappleLong" },
				{ "Guard.Name", "ESSActionTransitTrigger::Guard" },
				{ "Jump.Name", "ESSActionTransitTrigger::Jump" },
				{ "Kick.Name", "ESSActionTransitTrigger::Kick" },
				{ "KickLong.Name", "ESSActionTransitTrigger::KickLong" },
				{ "Land.Name", "ESSActionTransitTrigger::Land" },
				{ "Max.Name", "ESSActionTransitTrigger::Max" },
				{ "ModuleRelativePath", "Public/ESSActionTransitTrigger.h" },
				{ "Move.Name", "ESSActionTransitTrigger::Move" },
				{ "None.Name", "ESSActionTransitTrigger::None" },
				{ "Punch.Name", "ESSActionTransitTrigger::Punch" },
				{ "PunchLong.Name", "ESSActionTransitTrigger::PunchLong" },
				{ "Revive.Name", "ESSActionTransitTrigger::Revive" },
				{ "RunJump.Name", "ESSActionTransitTrigger::RunJump" },
				{ "StartAbilityMove.Name", "ESSActionTransitTrigger::StartAbilityMove" },
				{ "StartAttack.Name", "ESSActionTransitTrigger::StartAttack" },
				{ "StartLongAttack.Name", "ESSActionTransitTrigger::StartLongAttack" },
				{ "StartTapAttack.Name", "ESSActionTransitTrigger::StartTapAttack" },
				{ "Taunt.Name", "ESSActionTransitTrigger::Taunt" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSActionTransitTrigger",
				"ESSActionTransitTrigger",
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
