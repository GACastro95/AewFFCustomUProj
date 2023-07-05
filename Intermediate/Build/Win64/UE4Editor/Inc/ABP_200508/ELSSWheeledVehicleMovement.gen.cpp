// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWheeledVehicleMovement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWheeledVehicleMovement() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWheeledVehicleMovement_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWheeledVehicleMovement();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UWheeledVehicleMovementComponent4W();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(UELSSWheeledVehicleMovement::execGetBrakeInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBrakeInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWheeledVehicleMovement::execGetReplicatedRawThrottleInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetReplicatedRawThrottleInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWheeledVehicleMovement::execGetSteeringInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSteeringInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWheeledVehicleMovement::execGetThrottleInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetThrottleInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWheeledVehicleMovement::execServerUpdateStateExtend)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InSteeringInput);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InThrottleInput);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InBrakeInput);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InHandbrakeInput);
		P_GET_PROPERTY(FIntProperty,Z_Param_CurrentGear);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InRawThrottleInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerUpdateStateExtend_Implementation(Z_Param_InSteeringInput,Z_Param_InThrottleInput,Z_Param_InBrakeInput,Z_Param_InHandbrakeInput,Z_Param_CurrentGear,Z_Param_InRawThrottleInput);
		P_NATIVE_END;
	}
	static FName NAME_UELSSWheeledVehicleMovement_ServerUpdateStateExtend = FName(TEXT("ServerUpdateStateExtend"));
	void UELSSWheeledVehicleMovement::ServerUpdateStateExtend(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32 CurrentGear, float InRawThrottleInput)
	{
		ELSSWheeledVehicleMovement_eventServerUpdateStateExtend_Parms Parms;
		Parms.InSteeringInput=InSteeringInput;
		Parms.InThrottleInput=InThrottleInput;
		Parms.InBrakeInput=InBrakeInput;
		Parms.InHandbrakeInput=InHandbrakeInput;
		Parms.CurrentGear=CurrentGear;
		Parms.InRawThrottleInput=InRawThrottleInput;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWheeledVehicleMovement_ServerUpdateStateExtend),&Parms);
	}
	void UELSSWheeledVehicleMovement::StaticRegisterNativesUELSSWheeledVehicleMovement()
	{
		UClass* Class = UELSSWheeledVehicleMovement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBrakeInput", &UELSSWheeledVehicleMovement::execGetBrakeInput },
			{ "GetReplicatedRawThrottleInput", &UELSSWheeledVehicleMovement::execGetReplicatedRawThrottleInput },
			{ "GetSteeringInput", &UELSSWheeledVehicleMovement::execGetSteeringInput },
			{ "GetThrottleInput", &UELSSWheeledVehicleMovement::execGetThrottleInput },
			{ "ServerUpdateStateExtend", &UELSSWheeledVehicleMovement::execServerUpdateStateExtend },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetBrakeInput_Statics
	{
		struct ELSSWheeledVehicleMovement_eventGetBrakeInput_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetBrakeInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicleMovement_eventGetBrakeInput_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetBrakeInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetBrakeInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetBrakeInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicleMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetBrakeInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWheeledVehicleMovement, nullptr, "GetBrakeInput", nullptr, nullptr, sizeof(ELSSWheeledVehicleMovement_eventGetBrakeInput_Parms), Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetBrakeInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetBrakeInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetBrakeInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetBrakeInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetBrakeInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetBrakeInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetReplicatedRawThrottleInput_Statics
	{
		struct ELSSWheeledVehicleMovement_eventGetReplicatedRawThrottleInput_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetReplicatedRawThrottleInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicleMovement_eventGetReplicatedRawThrottleInput_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetReplicatedRawThrottleInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetReplicatedRawThrottleInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetReplicatedRawThrottleInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicleMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetReplicatedRawThrottleInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWheeledVehicleMovement, nullptr, "GetReplicatedRawThrottleInput", nullptr, nullptr, sizeof(ELSSWheeledVehicleMovement_eventGetReplicatedRawThrottleInput_Parms), Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetReplicatedRawThrottleInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetReplicatedRawThrottleInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetReplicatedRawThrottleInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetReplicatedRawThrottleInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetReplicatedRawThrottleInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetReplicatedRawThrottleInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetSteeringInput_Statics
	{
		struct ELSSWheeledVehicleMovement_eventGetSteeringInput_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetSteeringInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicleMovement_eventGetSteeringInput_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetSteeringInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetSteeringInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetSteeringInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicleMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetSteeringInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWheeledVehicleMovement, nullptr, "GetSteeringInput", nullptr, nullptr, sizeof(ELSSWheeledVehicleMovement_eventGetSteeringInput_Parms), Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetSteeringInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetSteeringInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetSteeringInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetSteeringInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetSteeringInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetSteeringInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetThrottleInput_Statics
	{
		struct ELSSWheeledVehicleMovement_eventGetThrottleInput_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetThrottleInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicleMovement_eventGetThrottleInput_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetThrottleInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetThrottleInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetThrottleInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicleMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetThrottleInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWheeledVehicleMovement, nullptr, "GetThrottleInput", nullptr, nullptr, sizeof(ELSSWheeledVehicleMovement_eventGetThrottleInput_Parms), Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetThrottleInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetThrottleInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetThrottleInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetThrottleInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetThrottleInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetThrottleInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWheeledVehicleMovement_ServerUpdateStateExtend_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InSteeringInput;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InThrottleInput;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InBrakeInput;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InHandbrakeInput;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentGear;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InRawThrottleInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWheeledVehicleMovement_ServerUpdateStateExtend_Statics::NewProp_InSteeringInput = { "InSteeringInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicleMovement_eventServerUpdateStateExtend_Parms, InSteeringInput), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWheeledVehicleMovement_ServerUpdateStateExtend_Statics::NewProp_InThrottleInput = { "InThrottleInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicleMovement_eventServerUpdateStateExtend_Parms, InThrottleInput), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWheeledVehicleMovement_ServerUpdateStateExtend_Statics::NewProp_InBrakeInput = { "InBrakeInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicleMovement_eventServerUpdateStateExtend_Parms, InBrakeInput), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWheeledVehicleMovement_ServerUpdateStateExtend_Statics::NewProp_InHandbrakeInput = { "InHandbrakeInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicleMovement_eventServerUpdateStateExtend_Parms, InHandbrakeInput), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWheeledVehicleMovement_ServerUpdateStateExtend_Statics::NewProp_CurrentGear = { "CurrentGear", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicleMovement_eventServerUpdateStateExtend_Parms, CurrentGear), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWheeledVehicleMovement_ServerUpdateStateExtend_Statics::NewProp_InRawThrottleInput = { "InRawThrottleInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWheeledVehicleMovement_eventServerUpdateStateExtend_Parms, InRawThrottleInput), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWheeledVehicleMovement_ServerUpdateStateExtend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWheeledVehicleMovement_ServerUpdateStateExtend_Statics::NewProp_InSteeringInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWheeledVehicleMovement_ServerUpdateStateExtend_Statics::NewProp_InThrottleInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWheeledVehicleMovement_ServerUpdateStateExtend_Statics::NewProp_InBrakeInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWheeledVehicleMovement_ServerUpdateStateExtend_Statics::NewProp_InHandbrakeInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWheeledVehicleMovement_ServerUpdateStateExtend_Statics::NewProp_CurrentGear,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWheeledVehicleMovement_ServerUpdateStateExtend_Statics::NewProp_InRawThrottleInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWheeledVehicleMovement_ServerUpdateStateExtend_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicleMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWheeledVehicleMovement_ServerUpdateStateExtend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWheeledVehicleMovement, nullptr, "ServerUpdateStateExtend", nullptr, nullptr, sizeof(ELSSWheeledVehicleMovement_eventServerUpdateStateExtend_Parms), Z_Construct_UFunction_UELSSWheeledVehicleMovement_ServerUpdateStateExtend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWheeledVehicleMovement_ServerUpdateStateExtend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWheeledVehicleMovement_ServerUpdateStateExtend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWheeledVehicleMovement_ServerUpdateStateExtend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWheeledVehicleMovement_ServerUpdateStateExtend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWheeledVehicleMovement_ServerUpdateStateExtend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSWheeledVehicleMovement_NoRegister()
	{
		return UELSSWheeledVehicleMovement::StaticClass();
	}
	struct Z_Construct_UClass_UELSSWheeledVehicleMovement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedRawThrottleInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReplicatedRawThrottleInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSWheeledVehicleMovement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWheeledVehicleMovementComponent4W,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSWheeledVehicleMovement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetBrakeInput, "GetBrakeInput" }, // 3452823809
		{ &Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetReplicatedRawThrottleInput, "GetReplicatedRawThrottleInput" }, // 711111716
		{ &Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetSteeringInput, "GetSteeringInput" }, // 2363760757
		{ &Z_Construct_UFunction_UELSSWheeledVehicleMovement_GetThrottleInput, "GetThrottleInput" }, // 3279815503
		{ &Z_Construct_UFunction_UELSSWheeledVehicleMovement_ServerUpdateStateExtend, "ServerUpdateStateExtend" }, // 1247902000
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWheeledVehicleMovement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "PlanarMovement Components|Movement|Planar Activation Components|Activation PlanarMovement Components|Movement|Planar Activation Components|Activation" },
		{ "IncludePath", "ELSSWheeledVehicleMovement.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicleMovement.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWheeledVehicleMovement_Statics::NewProp_ReplicatedRawThrottleInput_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWheeledVehicleMovement" },
		{ "ModuleRelativePath", "Public/ELSSWheeledVehicleMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWheeledVehicleMovement_Statics::NewProp_ReplicatedRawThrottleInput = { "ReplicatedRawThrottleInput", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWheeledVehicleMovement, ReplicatedRawThrottleInput), METADATA_PARAMS(Z_Construct_UClass_UELSSWheeledVehicleMovement_Statics::NewProp_ReplicatedRawThrottleInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWheeledVehicleMovement_Statics::NewProp_ReplicatedRawThrottleInput_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSWheeledVehicleMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWheeledVehicleMovement_Statics::NewProp_ReplicatedRawThrottleInput,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSWheeledVehicleMovement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSWheeledVehicleMovement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSWheeledVehicleMovement_Statics::ClassParams = {
		&UELSSWheeledVehicleMovement::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSWheeledVehicleMovement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWheeledVehicleMovement_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSWheeledVehicleMovement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWheeledVehicleMovement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSWheeledVehicleMovement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSWheeledVehicleMovement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSWheeledVehicleMovement, 2313166807);
	template<> ABP_200508_API UClass* StaticClass<UELSSWheeledVehicleMovement>()
	{
		return UELSSWheeledVehicleMovement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSWheeledVehicleMovement(Z_Construct_UClass_UELSSWheeledVehicleMovement, &UELSSWheeledVehicleMovement::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSWheeledVehicleMovement"), false, nullptr, nullptr, nullptr);

	void UELSSWheeledVehicleMovement::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedRawThrottleInput(TEXT("ReplicatedRawThrottleInput"));

		const bool bIsValid = true
			&& Name_ReplicatedRawThrottleInput == ClassReps[(int32)ENetFields_Private::ReplicatedRawThrottleInput].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UELSSWheeledVehicleMovement"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSWheeledVehicleMovement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
