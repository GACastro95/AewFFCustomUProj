// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSCameraState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSCameraState() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSCameraState();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSCameraState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSCameraState, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSCameraState"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSCameraState>()
	{
		return ESSCameraState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSCameraState(ESSCameraState_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSCameraState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSCameraState_Hash() { return 1140944386U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSCameraState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSCameraState"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSCameraState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSCameraState::Default", (int64)ESSCameraState::Default },
				{ "ESSCameraState::Jumping", (int64)ESSCameraState::Jumping },
				{ "ESSCameraState::JumpingDown", (int64)ESSCameraState::JumpingDown },
				{ "ESSCameraState::Falling", (int64)ESSCameraState::Falling },
				{ "ESSCameraState::DeadStart", (int64)ESSCameraState::DeadStart },
				{ "ESSCameraState::Dead", (int64)ESSCameraState::Dead },
				{ "ESSCameraState::Grapple", (int64)ESSCameraState::Grapple },
				{ "ESSCameraState::GrappleThrow", (int64)ESSCameraState::GrappleThrow },
				{ "ESSCameraState::VehicleDefault", (int64)ESSCameraState::VehicleDefault },
				{ "ESSCameraState::VehicleMoving", (int64)ESSCameraState::VehicleMoving },
				{ "ESSCameraState::HorseDefault", (int64)ESSCameraState::HorseDefault },
				{ "ESSCameraState::HorseMoving", (int64)ESSCameraState::HorseMoving },
				{ "ESSCameraState::GunAim", (int64)ESSCameraState::GunAim },
				{ "ESSCameraState::ThrowAim", (int64)ESSCameraState::ThrowAim },
				{ "ESSCameraState::PutTrapAim", (int64)ESSCameraState::PutTrapAim },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Dead.Name", "ESSCameraState::Dead" },
				{ "DeadStart.Name", "ESSCameraState::DeadStart" },
				{ "Default.Name", "ESSCameraState::Default" },
				{ "Falling.Name", "ESSCameraState::Falling" },
				{ "Grapple.Name", "ESSCameraState::Grapple" },
				{ "GrappleThrow.Name", "ESSCameraState::GrappleThrow" },
				{ "GunAim.Name", "ESSCameraState::GunAim" },
				{ "HorseDefault.Name", "ESSCameraState::HorseDefault" },
				{ "HorseMoving.Name", "ESSCameraState::HorseMoving" },
				{ "Jumping.Name", "ESSCameraState::Jumping" },
				{ "JumpingDown.Name", "ESSCameraState::JumpingDown" },
				{ "ModuleRelativePath", "Public/ESSCameraState.h" },
				{ "PutTrapAim.Name", "ESSCameraState::PutTrapAim" },
				{ "ThrowAim.Name", "ESSCameraState::ThrowAim" },
				{ "VehicleDefault.Name", "ESSCameraState::VehicleDefault" },
				{ "VehicleMoving.Name", "ESSCameraState::VehicleMoving" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSCameraState",
				"ESSCameraState",
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
