// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSVehicleInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSVehicleInterface() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSVehicleInterface_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSVehicleInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSVehicleType();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IELSSVehicleInterface::execGetActorCameraBasisLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetActorCameraBasisLocation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IELSSVehicleInterface::execGetMaxDurability)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxDurability_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IELSSVehicleInterface::execGetRemainDurability)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRemainDurability_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IELSSVehicleInterface::execGetSpeedPerHour)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSpeedPerHour_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IELSSVehicleInterface::execGetVehicleType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSVehicleType*)Z_Param__Result=P_THIS->GetVehicleType_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IELSSVehicleInterface::execOnGetOff)
	{
		P_GET_OBJECT(AELSSPlayer,Z_Param_Player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGetOff_Implementation(Z_Param_Player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IELSSVehicleInterface::execOnGetOn)
	{
		P_GET_OBJECT(AELSSPlayer,Z_Param_Player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGetOn_Implementation(Z_Param_Player);
		P_NATIVE_END;
	}
	FVector IELSSVehicleInterface::GetActorCameraBasisLocation() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetActorCameraBasisLocation instead.");
		ELSSVehicleInterface_eventGetActorCameraBasisLocation_Parms Parms;
		return Parms.ReturnValue;
	}
	int32 IELSSVehicleInterface::GetMaxDurability() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetMaxDurability instead.");
		ELSSVehicleInterface_eventGetMaxDurability_Parms Parms;
		return Parms.ReturnValue;
	}
	int32 IELSSVehicleInterface::GetRemainDurability() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetRemainDurability instead.");
		ELSSVehicleInterface_eventGetRemainDurability_Parms Parms;
		return Parms.ReturnValue;
	}
	float IELSSVehicleInterface::GetSpeedPerHour() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetSpeedPerHour instead.");
		ELSSVehicleInterface_eventGetSpeedPerHour_Parms Parms;
		return Parms.ReturnValue;
	}
	ESSVehicleType IELSSVehicleInterface::GetVehicleType() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetVehicleType instead.");
		ELSSVehicleInterface_eventGetVehicleType_Parms Parms;
		return Parms.ReturnValue;
	}
	void IELSSVehicleInterface::OnGetOff(AELSSPlayer* Player)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnGetOff instead.");
	}
	void IELSSVehicleInterface::OnGetOn(AELSSPlayer* Player)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnGetOn instead.");
	}
	void UELSSVehicleInterface::StaticRegisterNativesUELSSVehicleInterface()
	{
		UClass* Class = UELSSVehicleInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActorCameraBasisLocation", &IELSSVehicleInterface::execGetActorCameraBasisLocation },
			{ "GetMaxDurability", &IELSSVehicleInterface::execGetMaxDurability },
			{ "GetRemainDurability", &IELSSVehicleInterface::execGetRemainDurability },
			{ "GetSpeedPerHour", &IELSSVehicleInterface::execGetSpeedPerHour },
			{ "GetVehicleType", &IELSSVehicleInterface::execGetVehicleType },
			{ "OnGetOff", &IELSSVehicleInterface::execOnGetOff },
			{ "OnGetOn", &IELSSVehicleInterface::execOnGetOn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSVehicleInterface_GetActorCameraBasisLocation_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSVehicleInterface_GetActorCameraBasisLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSVehicleInterface_eventGetActorCameraBasisLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSVehicleInterface_GetActorCameraBasisLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSVehicleInterface_GetActorCameraBasisLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSVehicleInterface_GetActorCameraBasisLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSVehicleInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSVehicleInterface_GetActorCameraBasisLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSVehicleInterface, nullptr, "GetActorCameraBasisLocation", nullptr, nullptr, sizeof(ELSSVehicleInterface_eventGetActorCameraBasisLocation_Parms), Z_Construct_UFunction_UELSSVehicleInterface_GetActorCameraBasisLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSVehicleInterface_GetActorCameraBasisLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSVehicleInterface_GetActorCameraBasisLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSVehicleInterface_GetActorCameraBasisLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSVehicleInterface_GetActorCameraBasisLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSVehicleInterface_GetActorCameraBasisLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSVehicleInterface_GetMaxDurability_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSVehicleInterface_GetMaxDurability_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSVehicleInterface_eventGetMaxDurability_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSVehicleInterface_GetMaxDurability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSVehicleInterface_GetMaxDurability_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSVehicleInterface_GetMaxDurability_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSVehicleInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSVehicleInterface_GetMaxDurability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSVehicleInterface, nullptr, "GetMaxDurability", nullptr, nullptr, sizeof(ELSSVehicleInterface_eventGetMaxDurability_Parms), Z_Construct_UFunction_UELSSVehicleInterface_GetMaxDurability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSVehicleInterface_GetMaxDurability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSVehicleInterface_GetMaxDurability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSVehicleInterface_GetMaxDurability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSVehicleInterface_GetMaxDurability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSVehicleInterface_GetMaxDurability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSVehicleInterface_GetRemainDurability_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSVehicleInterface_GetRemainDurability_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSVehicleInterface_eventGetRemainDurability_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSVehicleInterface_GetRemainDurability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSVehicleInterface_GetRemainDurability_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSVehicleInterface_GetRemainDurability_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSVehicleInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSVehicleInterface_GetRemainDurability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSVehicleInterface, nullptr, "GetRemainDurability", nullptr, nullptr, sizeof(ELSSVehicleInterface_eventGetRemainDurability_Parms), Z_Construct_UFunction_UELSSVehicleInterface_GetRemainDurability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSVehicleInterface_GetRemainDurability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSVehicleInterface_GetRemainDurability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSVehicleInterface_GetRemainDurability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSVehicleInterface_GetRemainDurability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSVehicleInterface_GetRemainDurability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSVehicleInterface_GetSpeedPerHour_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSVehicleInterface_GetSpeedPerHour_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSVehicleInterface_eventGetSpeedPerHour_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSVehicleInterface_GetSpeedPerHour_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSVehicleInterface_GetSpeedPerHour_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSVehicleInterface_GetSpeedPerHour_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSVehicleInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSVehicleInterface_GetSpeedPerHour_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSVehicleInterface, nullptr, "GetSpeedPerHour", nullptr, nullptr, sizeof(ELSSVehicleInterface_eventGetSpeedPerHour_Parms), Z_Construct_UFunction_UELSSVehicleInterface_GetSpeedPerHour_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSVehicleInterface_GetSpeedPerHour_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSVehicleInterface_GetSpeedPerHour_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSVehicleInterface_GetSpeedPerHour_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSVehicleInterface_GetSpeedPerHour()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSVehicleInterface_GetSpeedPerHour_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSVehicleInterface_GetVehicleType_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSVehicleInterface_GetVehicleType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSVehicleInterface_GetVehicleType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSVehicleInterface_eventGetVehicleType_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSVehicleType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSVehicleInterface_GetVehicleType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSVehicleInterface_GetVehicleType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSVehicleInterface_GetVehicleType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSVehicleInterface_GetVehicleType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSVehicleInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSVehicleInterface_GetVehicleType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSVehicleInterface, nullptr, "GetVehicleType", nullptr, nullptr, sizeof(ELSSVehicleInterface_eventGetVehicleType_Parms), Z_Construct_UFunction_UELSSVehicleInterface_GetVehicleType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSVehicleInterface_GetVehicleType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSVehicleInterface_GetVehicleType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSVehicleInterface_GetVehicleType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSVehicleInterface_GetVehicleType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSVehicleInterface_GetVehicleType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSVehicleInterface_OnGetOff_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSVehicleInterface_OnGetOff_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSVehicleInterface_eventOnGetOff_Parms, Player), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSVehicleInterface_OnGetOff_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSVehicleInterface_OnGetOff_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSVehicleInterface_OnGetOff_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSVehicleInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSVehicleInterface_OnGetOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSVehicleInterface, nullptr, "OnGetOff", nullptr, nullptr, sizeof(ELSSVehicleInterface_eventOnGetOff_Parms), Z_Construct_UFunction_UELSSVehicleInterface_OnGetOff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSVehicleInterface_OnGetOff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSVehicleInterface_OnGetOff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSVehicleInterface_OnGetOff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSVehicleInterface_OnGetOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSVehicleInterface_OnGetOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSVehicleInterface_OnGetOn_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSVehicleInterface_OnGetOn_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSVehicleInterface_eventOnGetOn_Parms, Player), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSVehicleInterface_OnGetOn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSVehicleInterface_OnGetOn_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSVehicleInterface_OnGetOn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSVehicleInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSVehicleInterface_OnGetOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSVehicleInterface, nullptr, "OnGetOn", nullptr, nullptr, sizeof(ELSSVehicleInterface_eventOnGetOn_Parms), Z_Construct_UFunction_UELSSVehicleInterface_OnGetOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSVehicleInterface_OnGetOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSVehicleInterface_OnGetOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSVehicleInterface_OnGetOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSVehicleInterface_OnGetOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSVehicleInterface_OnGetOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSVehicleInterface_NoRegister()
	{
		return UELSSVehicleInterface::StaticClass();
	}
	struct Z_Construct_UClass_UELSSVehicleInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSVehicleInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSVehicleInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSVehicleInterface_GetActorCameraBasisLocation, "GetActorCameraBasisLocation" }, // 1674510928
		{ &Z_Construct_UFunction_UELSSVehicleInterface_GetMaxDurability, "GetMaxDurability" }, // 3717923434
		{ &Z_Construct_UFunction_UELSSVehicleInterface_GetRemainDurability, "GetRemainDurability" }, // 2883424553
		{ &Z_Construct_UFunction_UELSSVehicleInterface_GetSpeedPerHour, "GetSpeedPerHour" }, // 2473588608
		{ &Z_Construct_UFunction_UELSSVehicleInterface_GetVehicleType, "GetVehicleType" }, // 2049213604
		{ &Z_Construct_UFunction_UELSSVehicleInterface_OnGetOff, "OnGetOff" }, // 1420724007
		{ &Z_Construct_UFunction_UELSSVehicleInterface_OnGetOn, "OnGetOn" }, // 4269797079
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSVehicleInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSVehicleInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSVehicleInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IELSSVehicleInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSVehicleInterface_Statics::ClassParams = {
		&UELSSVehicleInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSVehicleInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSVehicleInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSVehicleInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSVehicleInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSVehicleInterface, 1498677687);
	template<> ABP_200508_API UClass* StaticClass<UELSSVehicleInterface>()
	{
		return UELSSVehicleInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSVehicleInterface(Z_Construct_UClass_UELSSVehicleInterface, &UELSSVehicleInterface::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSVehicleInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSVehicleInterface);
	static FName NAME_UELSSVehicleInterface_GetActorCameraBasisLocation = FName(TEXT("GetActorCameraBasisLocation"));
	FVector IELSSVehicleInterface::Execute_GetActorCameraBasisLocation(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UELSSVehicleInterface::StaticClass()));
		ELSSVehicleInterface_eventGetActorCameraBasisLocation_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UELSSVehicleInterface_GetActorCameraBasisLocation);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IELSSVehicleInterface*)(O->GetNativeInterfaceAddress(UELSSVehicleInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetActorCameraBasisLocation_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UELSSVehicleInterface_GetMaxDurability = FName(TEXT("GetMaxDurability"));
	int32 IELSSVehicleInterface::Execute_GetMaxDurability(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UELSSVehicleInterface::StaticClass()));
		ELSSVehicleInterface_eventGetMaxDurability_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UELSSVehicleInterface_GetMaxDurability);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IELSSVehicleInterface*)(O->GetNativeInterfaceAddress(UELSSVehicleInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetMaxDurability_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UELSSVehicleInterface_GetRemainDurability = FName(TEXT("GetRemainDurability"));
	int32 IELSSVehicleInterface::Execute_GetRemainDurability(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UELSSVehicleInterface::StaticClass()));
		ELSSVehicleInterface_eventGetRemainDurability_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UELSSVehicleInterface_GetRemainDurability);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IELSSVehicleInterface*)(O->GetNativeInterfaceAddress(UELSSVehicleInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetRemainDurability_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UELSSVehicleInterface_GetSpeedPerHour = FName(TEXT("GetSpeedPerHour"));
	float IELSSVehicleInterface::Execute_GetSpeedPerHour(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UELSSVehicleInterface::StaticClass()));
		ELSSVehicleInterface_eventGetSpeedPerHour_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UELSSVehicleInterface_GetSpeedPerHour);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IELSSVehicleInterface*)(O->GetNativeInterfaceAddress(UELSSVehicleInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetSpeedPerHour_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UELSSVehicleInterface_GetVehicleType = FName(TEXT("GetVehicleType"));
	ESSVehicleType IELSSVehicleInterface::Execute_GetVehicleType(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UELSSVehicleInterface::StaticClass()));
		ELSSVehicleInterface_eventGetVehicleType_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UELSSVehicleInterface_GetVehicleType);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IELSSVehicleInterface*)(O->GetNativeInterfaceAddress(UELSSVehicleInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetVehicleType_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UELSSVehicleInterface_OnGetOff = FName(TEXT("OnGetOff"));
	void IELSSVehicleInterface::Execute_OnGetOff(UObject* O, AELSSPlayer* Player)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UELSSVehicleInterface::StaticClass()));
		ELSSVehicleInterface_eventOnGetOff_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UELSSVehicleInterface_OnGetOff);
		if (Func)
		{
			Parms.Player=Player;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IELSSVehicleInterface*)(O->GetNativeInterfaceAddress(UELSSVehicleInterface::StaticClass())))
		{
			I->OnGetOff_Implementation(Player);
		}
	}
	static FName NAME_UELSSVehicleInterface_OnGetOn = FName(TEXT("OnGetOn"));
	void IELSSVehicleInterface::Execute_OnGetOn(UObject* O, AELSSPlayer* Player)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UELSSVehicleInterface::StaticClass()));
		ELSSVehicleInterface_eventOnGetOn_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UELSSVehicleInterface_OnGetOn);
		if (Func)
		{
			Parms.Player=Player;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IELSSVehicleInterface*)(O->GetNativeInterfaceAddress(UELSSVehicleInterface::StaticClass())))
		{
			I->OnGetOn_Implementation(Player);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
