// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWidgetHUD_Vehicle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWidgetHUD_Vehicle() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_Vehicle_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_Vehicle();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSVehicleType();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELSSWidgetHUD_Vehicle::execApplyVehicleDurability)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InVehicleDurability);
		P_GET_PROPERTY(FIntProperty,Z_Param_InMaxDurability);
		P_GET_UBOOL(Z_Param_InGaugeTransition);
		P_GET_ENUM(ESSVehicleType,Z_Param_InVehicleType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyVehicleDurability(Z_Param_InVehicleDurability,Z_Param_InMaxDurability,Z_Param_InGaugeTransition,ESSVehicleType(Z_Param_InVehicleType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_Vehicle::execApplyVehicleGauge)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDurableRatio);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyVehicleGauge(Z_Param_InDurableRatio);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_Vehicle::execSetTargetActor)
	{
		P_GET_OBJECT(AActor,Z_Param_inTargetActor);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetActor(Z_Param_inTargetActor,Z_Param_Out_InOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_Vehicle::execUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Update(Z_Param_InDeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_Vehicle::execUpdatePos)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePos();
		P_NATIVE_END;
	}
	static FName NAME_UELSSWidgetHUD_Vehicle_Init = FName(TEXT("Init"));
	void UELSSWidgetHUD_Vehicle::Init()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_Vehicle_Init),NULL);
	}
	void UELSSWidgetHUD_Vehicle::StaticRegisterNativesUELSSWidgetHUD_Vehicle()
	{
		UClass* Class = UELSSWidgetHUD_Vehicle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyVehicleDurability", &UELSSWidgetHUD_Vehicle::execApplyVehicleDurability },
			{ "ApplyVehicleGauge", &UELSSWidgetHUD_Vehicle::execApplyVehicleGauge },
			{ "SetTargetActor", &UELSSWidgetHUD_Vehicle::execSetTargetActor },
			{ "Update", &UELSSWidgetHUD_Vehicle::execUpdate },
			{ "UpdatePos", &UELSSWidgetHUD_Vehicle::execUpdatePos },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_ApplyVehicleDurability_Statics
	{
		struct ELSSWidgetHUD_Vehicle_eventApplyVehicleDurability_Parms
		{
			int32 InVehicleDurability;
			int32 InMaxDurability;
			bool InGaugeTransition;
			ESSVehicleType InVehicleType;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InVehicleDurability;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InMaxDurability;
		static void NewProp_InGaugeTransition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InGaugeTransition;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InVehicleType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InVehicleType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_ApplyVehicleDurability_Statics::NewProp_InVehicleDurability = { "InVehicleDurability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_Vehicle_eventApplyVehicleDurability_Parms, InVehicleDurability), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_ApplyVehicleDurability_Statics::NewProp_InMaxDurability = { "InMaxDurability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_Vehicle_eventApplyVehicleDurability_Parms, InMaxDurability), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_ApplyVehicleDurability_Statics::NewProp_InGaugeTransition_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_Vehicle_eventApplyVehicleDurability_Parms*)Obj)->InGaugeTransition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_ApplyVehicleDurability_Statics::NewProp_InGaugeTransition = { "InGaugeTransition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_Vehicle_eventApplyVehicleDurability_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_ApplyVehicleDurability_Statics::NewProp_InGaugeTransition_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_ApplyVehicleDurability_Statics::NewProp_InVehicleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_ApplyVehicleDurability_Statics::NewProp_InVehicleType = { "InVehicleType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_Vehicle_eventApplyVehicleDurability_Parms, InVehicleType), Z_Construct_UEnum_ABP_200508_ESSVehicleType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_ApplyVehicleDurability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_ApplyVehicleDurability_Statics::NewProp_InVehicleDurability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_ApplyVehicleDurability_Statics::NewProp_InMaxDurability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_ApplyVehicleDurability_Statics::NewProp_InGaugeTransition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_ApplyVehicleDurability_Statics::NewProp_InVehicleType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_ApplyVehicleDurability_Statics::NewProp_InVehicleType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_ApplyVehicleDurability_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Vehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_ApplyVehicleDurability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_Vehicle, nullptr, "ApplyVehicleDurability", nullptr, nullptr, sizeof(ELSSWidgetHUD_Vehicle_eventApplyVehicleDurability_Parms), Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_ApplyVehicleDurability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_ApplyVehicleDurability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_ApplyVehicleDurability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_ApplyVehicleDurability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_ApplyVehicleDurability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_ApplyVehicleDurability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_ApplyVehicleGauge_Statics
	{
		struct ELSSWidgetHUD_Vehicle_eventApplyVehicleGauge_Parms
		{
			float InDurableRatio;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDurableRatio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_ApplyVehicleGauge_Statics::NewProp_InDurableRatio = { "InDurableRatio", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_Vehicle_eventApplyVehicleGauge_Parms, InDurableRatio), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_ApplyVehicleGauge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_ApplyVehicleGauge_Statics::NewProp_InDurableRatio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_ApplyVehicleGauge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Vehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_ApplyVehicleGauge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_Vehicle, nullptr, "ApplyVehicleGauge", nullptr, nullptr, sizeof(ELSSWidgetHUD_Vehicle_eventApplyVehicleGauge_Parms), Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_ApplyVehicleGauge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_ApplyVehicleGauge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_ApplyVehicleGauge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_ApplyVehicleGauge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_ApplyVehicleGauge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_ApplyVehicleGauge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_Init_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Vehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_Vehicle, nullptr, "Init", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_SetTargetActor_Statics
	{
		struct ELSSWidgetHUD_Vehicle_eventSetTargetActor_Parms
		{
			AActor* inTargetActor;
			FVector InOffset;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inTargetActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_SetTargetActor_Statics::NewProp_inTargetActor = { "inTargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_Vehicle_eventSetTargetActor_Parms, inTargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_SetTargetActor_Statics::NewProp_InOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_SetTargetActor_Statics::NewProp_InOffset = { "InOffset", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_Vehicle_eventSetTargetActor_Parms, InOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_SetTargetActor_Statics::NewProp_InOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_SetTargetActor_Statics::NewProp_InOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_SetTargetActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_SetTargetActor_Statics::NewProp_inTargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_SetTargetActor_Statics::NewProp_InOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_SetTargetActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Vehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_SetTargetActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_Vehicle, nullptr, "SetTargetActor", nullptr, nullptr, sizeof(ELSSWidgetHUD_Vehicle_eventSetTargetActor_Parms), Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_SetTargetActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_SetTargetActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_SetTargetActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_SetTargetActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_SetTargetActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_SetTargetActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_Update_Statics
	{
		struct ELSSWidgetHUD_Vehicle_eventUpdate_Parms
		{
			float InDeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_Update_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_Vehicle_eventUpdate_Parms, InDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_Update_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_Update_Statics::NewProp_InDeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Vehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_Vehicle, nullptr, "Update", nullptr, nullptr, sizeof(ELSSWidgetHUD_Vehicle_eventUpdate_Parms), Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_UpdatePos_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_UpdatePos_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Vehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_UpdatePos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_Vehicle, nullptr, "UpdatePos", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_UpdatePos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_UpdatePos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_UpdatePos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_UpdatePos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSWidgetHUD_Vehicle_NoRegister()
	{
		return UELSSWidgetHUD_Vehicle::StaticClass();
	}
	struct Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GaugeMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GaugeMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GaugeDiffMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GaugeDiffMaterial;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VehicleTextures_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleTextures_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VehicleTextures;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleIconImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VehicleIconImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DurableMaxValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DurableMaxValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdealDurableValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IdealDurableValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleDurability_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VehicleDurability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Elapsed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Elapsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCompleteDuration_MetaData[];
#endif
		static void NewProp_IsCompleteDuration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCompleteDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_ApplyVehicleDurability, "ApplyVehicleDurability" }, // 3852309265
		{ &Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_ApplyVehicleGauge, "ApplyVehicleGauge" }, // 1570807751
		{ &Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_Init, "Init" }, // 1993335275
		{ &Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_SetTargetActor, "SetTargetActor" }, // 1864766936
		{ &Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_Update, "Update" }, // 921126174
		{ &Z_Construct_UFunction_UELSSWidgetHUD_Vehicle_UpdatePos, "UpdatePos" }, // 281649124
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWidgetHUD_Vehicle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Vehicle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_GaugeMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_Vehicle" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Vehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_GaugeMaterial = { "GaugeMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_Vehicle, GaugeMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_GaugeMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_GaugeMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_GaugeDiffMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_Vehicle" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Vehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_GaugeDiffMaterial = { "GaugeDiffMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_Vehicle, GaugeDiffMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_GaugeDiffMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_GaugeDiffMaterial_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_VehicleTextures_Inner = { "VehicleTextures", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_VehicleTextures_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_Vehicle" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Vehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_VehicleTextures = { "VehicleTextures", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_Vehicle, VehicleTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_VehicleTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_VehicleTextures_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_VehicleIconImage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_Vehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Vehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_VehicleIconImage = { "VehicleIconImage", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_Vehicle, VehicleIconImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_VehicleIconImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_VehicleIconImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_TargetActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_Vehicle" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Vehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_Vehicle, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_TargetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_TargetActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_PlayerController_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_Vehicle" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Vehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_Vehicle, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_PlayerController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_Offset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_Vehicle" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Vehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_Vehicle, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_DurableMaxValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_Vehicle" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Vehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_DurableMaxValue = { "DurableMaxValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_Vehicle, DurableMaxValue), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_DurableMaxValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_DurableMaxValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_IdealDurableValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_Vehicle" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Vehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_IdealDurableValue = { "IdealDurableValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_Vehicle, IdealDurableValue), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_IdealDurableValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_IdealDurableValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_VehicleDurability_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_Vehicle" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Vehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_VehicleDurability = { "VehicleDurability", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_Vehicle, VehicleDurability), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_VehicleDurability_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_VehicleDurability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_Duration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_Vehicle" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Vehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_Vehicle, Duration), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_Elapsed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_Vehicle" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Vehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_Elapsed = { "Elapsed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_Vehicle, Elapsed), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_Elapsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_Elapsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_IsCompleteDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_Vehicle" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_Vehicle.h" },
	};
#endif
	void Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_IsCompleteDuration_SetBit(void* Obj)
	{
		((UELSSWidgetHUD_Vehicle*)Obj)->IsCompleteDuration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_IsCompleteDuration = { "IsCompleteDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSWidgetHUD_Vehicle), &Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_IsCompleteDuration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_IsCompleteDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_IsCompleteDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_GaugeMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_GaugeDiffMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_VehicleTextures_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_VehicleTextures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_VehicleIconImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_TargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_DurableMaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_IdealDurableValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_VehicleDurability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_Elapsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::NewProp_IsCompleteDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSWidgetHUD_Vehicle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::ClassParams = {
		&UELSSWidgetHUD_Vehicle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSWidgetHUD_Vehicle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSWidgetHUD_Vehicle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSWidgetHUD_Vehicle, 3389502532);
	template<> ABP_200508_API UClass* StaticClass<UELSSWidgetHUD_Vehicle>()
	{
		return UELSSWidgetHUD_Vehicle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSWidgetHUD_Vehicle(Z_Construct_UClass_UELSSWidgetHUD_Vehicle, &UELSSWidgetHUD_Vehicle::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSWidgetHUD_Vehicle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSWidgetHUD_Vehicle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
