// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSHorseMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSHorseMovementComponent() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSHorseMovementComponent_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSHorseMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UELSSHorseMovementComponent::execIsBraking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBraking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSHorseMovementComponent::execSendForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_inYaw);
		P_GET_UBOOL(Z_Param_inBackMoving);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendForward_Implementation(Z_Param_inYaw,Z_Param_inBackMoving);
		P_NATIVE_END;
	}
	static FName NAME_UELSSHorseMovementComponent_SendForward = FName(TEXT("SendForward"));
	void UELSSHorseMovementComponent::SendForward(float inYaw, bool inBackMoving)
	{
		ELSSHorseMovementComponent_eventSendForward_Parms Parms;
		Parms.inYaw=inYaw;
		Parms.inBackMoving=inBackMoving ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELSSHorseMovementComponent_SendForward),&Parms);
	}
	void UELSSHorseMovementComponent::StaticRegisterNativesUELSSHorseMovementComponent()
	{
		UClass* Class = UELSSHorseMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsBraking", &UELSSHorseMovementComponent::execIsBraking },
			{ "SendForward", &UELSSHorseMovementComponent::execSendForward },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSHorseMovementComponent_IsBraking_Statics
	{
		struct ELSSHorseMovementComponent_eventIsBraking_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSHorseMovementComponent_IsBraking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSHorseMovementComponent_eventIsBraking_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSHorseMovementComponent_IsBraking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSHorseMovementComponent_eventIsBraking_Parms), &Z_Construct_UFunction_UELSSHorseMovementComponent_IsBraking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSHorseMovementComponent_IsBraking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSHorseMovementComponent_IsBraking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSHorseMovementComponent_IsBraking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSHorseMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSHorseMovementComponent_IsBraking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSHorseMovementComponent, nullptr, "IsBraking", nullptr, nullptr, sizeof(ELSSHorseMovementComponent_eventIsBraking_Parms), Z_Construct_UFunction_UELSSHorseMovementComponent_IsBraking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSHorseMovementComponent_IsBraking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSHorseMovementComponent_IsBraking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSHorseMovementComponent_IsBraking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSHorseMovementComponent_IsBraking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSHorseMovementComponent_IsBraking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSHorseMovementComponent_SendForward_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inYaw;
		static void NewProp_inBackMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inBackMoving;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSHorseMovementComponent_SendForward_Statics::NewProp_inYaw = { "inYaw", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSHorseMovementComponent_eventSendForward_Parms, inYaw), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSHorseMovementComponent_SendForward_Statics::NewProp_inBackMoving_SetBit(void* Obj)
	{
		((ELSSHorseMovementComponent_eventSendForward_Parms*)Obj)->inBackMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSHorseMovementComponent_SendForward_Statics::NewProp_inBackMoving = { "inBackMoving", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSHorseMovementComponent_eventSendForward_Parms), &Z_Construct_UFunction_UELSSHorseMovementComponent_SendForward_Statics::NewProp_inBackMoving_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSHorseMovementComponent_SendForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSHorseMovementComponent_SendForward_Statics::NewProp_inYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSHorseMovementComponent_SendForward_Statics::NewProp_inBackMoving,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSHorseMovementComponent_SendForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSHorseMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSHorseMovementComponent_SendForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSHorseMovementComponent, nullptr, "SendForward", nullptr, nullptr, sizeof(ELSSHorseMovementComponent_eventSendForward_Parms), Z_Construct_UFunction_UELSSHorseMovementComponent_SendForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSHorseMovementComponent_SendForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04280C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSHorseMovementComponent_SendForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSHorseMovementComponent_SendForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSHorseMovementComponent_SendForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSHorseMovementComponent_SendForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSHorseMovementComponent_NoRegister()
	{
		return UELSSHorseMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UELSSHorseMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackMoving_MetaData[];
#endif
		static void NewProp_BackMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BackMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Braking_MetaData[];
#endif
		static void NewProp_Braking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Braking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrevSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PrevSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemainBrakeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RemainBrakeTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrakeDecelerationThoreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BrakeDecelerationThoreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrakeMinDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BrakeMinDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrakeMinSpeedRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BrakeMinSpeedRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LateralInputAccelerationRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LateralInputAccelerationRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LateralInputAccelerationRateOnBraking_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LateralInputAccelerationRateOnBraking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackInputAccelerationRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BackInputAccelerationRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteeringCoefOnMaxSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SteeringCoefOnMaxSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteeringForwardRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SteeringForwardRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputVectorInterpSpeedForward_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InputVectorInterpSpeedForward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputVectorInterpSpeedForwardOnSteering_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InputVectorInterpSpeedForwardOnSteering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputVectorInterpSpeedLateral_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InputVectorInterpSpeedLateral;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputVectorInterpSpeedOnBraking_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InputVectorInterpSpeedOnBraking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinInputAccelerationLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinInputAccelerationLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrevInputVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrevInputVector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSHorseMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSHorseMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSHorseMovementComponent_IsBraking, "IsBraking" }, // 1602216144
		{ &Z_Construct_UFunction_UELSSHorseMovementComponent_SendForward, "SendForward" }, // 583929965
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSHorseMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ELSSHorseMovementComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSHorseMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_BackMoving_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorseMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSHorseMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_BackMoving_SetBit(void* Obj)
	{
		((UELSSHorseMovementComponent*)Obj)->BackMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_BackMoving = { "BackMoving", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSHorseMovementComponent), &Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_BackMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_BackMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_BackMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_Braking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorseMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSHorseMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_Braking_SetBit(void* Obj)
	{
		((UELSSHorseMovementComponent*)Obj)->Braking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_Braking = { "Braking", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSHorseMovementComponent), &Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_Braking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_Braking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_Braking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_PrevSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorseMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSHorseMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_PrevSpeed = { "PrevSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSHorseMovementComponent, PrevSpeed), METADATA_PARAMS(Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_PrevSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_PrevSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_RemainBrakeTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorseMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSHorseMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_RemainBrakeTime = { "RemainBrakeTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSHorseMovementComponent, RemainBrakeTime), METADATA_PARAMS(Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_RemainBrakeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_RemainBrakeTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_BrakeDecelerationThoreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorseMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSHorseMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_BrakeDecelerationThoreshold = { "BrakeDecelerationThoreshold", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSHorseMovementComponent, BrakeDecelerationThoreshold), METADATA_PARAMS(Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_BrakeDecelerationThoreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_BrakeDecelerationThoreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_BrakeMinDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorseMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSHorseMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_BrakeMinDuration = { "BrakeMinDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSHorseMovementComponent, BrakeMinDuration), METADATA_PARAMS(Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_BrakeMinDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_BrakeMinDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_BrakeMinSpeedRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorseMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSHorseMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_BrakeMinSpeedRate = { "BrakeMinSpeedRate", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSHorseMovementComponent, BrakeMinSpeedRate), METADATA_PARAMS(Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_BrakeMinSpeedRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_BrakeMinSpeedRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_LateralInputAccelerationRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorseMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSHorseMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_LateralInputAccelerationRate = { "LateralInputAccelerationRate", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSHorseMovementComponent, LateralInputAccelerationRate), METADATA_PARAMS(Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_LateralInputAccelerationRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_LateralInputAccelerationRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_LateralInputAccelerationRateOnBraking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorseMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSHorseMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_LateralInputAccelerationRateOnBraking = { "LateralInputAccelerationRateOnBraking", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSHorseMovementComponent, LateralInputAccelerationRateOnBraking), METADATA_PARAMS(Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_LateralInputAccelerationRateOnBraking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_LateralInputAccelerationRateOnBraking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_BackInputAccelerationRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorseMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSHorseMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_BackInputAccelerationRate = { "BackInputAccelerationRate", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSHorseMovementComponent, BackInputAccelerationRate), METADATA_PARAMS(Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_BackInputAccelerationRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_BackInputAccelerationRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_SteeringCoefOnMaxSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorseMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSHorseMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_SteeringCoefOnMaxSpeed = { "SteeringCoefOnMaxSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSHorseMovementComponent, SteeringCoefOnMaxSpeed), METADATA_PARAMS(Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_SteeringCoefOnMaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_SteeringCoefOnMaxSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_SteeringForwardRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorseMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSHorseMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_SteeringForwardRate = { "SteeringForwardRate", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSHorseMovementComponent, SteeringForwardRate), METADATA_PARAMS(Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_SteeringForwardRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_SteeringForwardRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_InputVectorInterpSpeedForward_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorseMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSHorseMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_InputVectorInterpSpeedForward = { "InputVectorInterpSpeedForward", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSHorseMovementComponent, InputVectorInterpSpeedForward), METADATA_PARAMS(Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_InputVectorInterpSpeedForward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_InputVectorInterpSpeedForward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_InputVectorInterpSpeedForwardOnSteering_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorseMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSHorseMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_InputVectorInterpSpeedForwardOnSteering = { "InputVectorInterpSpeedForwardOnSteering", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSHorseMovementComponent, InputVectorInterpSpeedForwardOnSteering), METADATA_PARAMS(Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_InputVectorInterpSpeedForwardOnSteering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_InputVectorInterpSpeedForwardOnSteering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_InputVectorInterpSpeedLateral_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorseMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSHorseMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_InputVectorInterpSpeedLateral = { "InputVectorInterpSpeedLateral", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSHorseMovementComponent, InputVectorInterpSpeedLateral), METADATA_PARAMS(Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_InputVectorInterpSpeedLateral_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_InputVectorInterpSpeedLateral_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_InputVectorInterpSpeedOnBraking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorseMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSHorseMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_InputVectorInterpSpeedOnBraking = { "InputVectorInterpSpeedOnBraking", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSHorseMovementComponent, InputVectorInterpSpeedOnBraking), METADATA_PARAMS(Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_InputVectorInterpSpeedOnBraking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_InputVectorInterpSpeedOnBraking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_MinInputAccelerationLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorseMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSHorseMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_MinInputAccelerationLength = { "MinInputAccelerationLength", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSHorseMovementComponent, MinInputAccelerationLength), METADATA_PARAMS(Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_MinInputAccelerationLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_MinInputAccelerationLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_PrevInputVector_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSHorseMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSHorseMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_PrevInputVector = { "PrevInputVector", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSHorseMovementComponent, PrevInputVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_PrevInputVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_PrevInputVector_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSHorseMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_BackMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_Braking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_PrevSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_RemainBrakeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_BrakeDecelerationThoreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_BrakeMinDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_BrakeMinSpeedRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_LateralInputAccelerationRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_LateralInputAccelerationRateOnBraking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_BackInputAccelerationRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_SteeringCoefOnMaxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_SteeringForwardRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_InputVectorInterpSpeedForward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_InputVectorInterpSpeedForwardOnSteering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_InputVectorInterpSpeedLateral,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_InputVectorInterpSpeedOnBraking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_MinInputAccelerationLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSHorseMovementComponent_Statics::NewProp_PrevInputVector,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSHorseMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSHorseMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSHorseMovementComponent_Statics::ClassParams = {
		&UELSSHorseMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSHorseMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSHorseMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSHorseMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSHorseMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSHorseMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSHorseMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSHorseMovementComponent, 4252087516);
	template<> ABP_200508_API UClass* StaticClass<UELSSHorseMovementComponent>()
	{
		return UELSSHorseMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSHorseMovementComponent(Z_Construct_UClass_UELSSHorseMovementComponent, &UELSSHorseMovementComponent::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSHorseMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSHorseMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
