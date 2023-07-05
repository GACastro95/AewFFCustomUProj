// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSSituationMoveTrigger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSSituationMoveTrigger() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSSituationMoveTrigger_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSSituationMoveTrigger();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELSSSituationMoveTrigger::execExecuteSituation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteSituation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSSituationMoveTrigger::execGetCameraOffset)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_inActionSyncLocation);
		P_GET_PROPERTY(FIntProperty,Z_Param_inMoveId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetCameraOffset(Z_Param_Out_inActionSyncLocation,Z_Param_inMoveId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSSituationMoveTrigger::execGetIdealLocation)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_inReceiverTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USceneComponent**)Z_Param__Result=P_THIS->GetIdealLocation(Z_Param_Out_inReceiverTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSSituationMoveTrigger::execGetIdealLocationComponent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inMoveId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USceneComponent**)Z_Param__Result=P_THIS->GetIdealLocationComponent_Implementation(Z_Param_inMoveId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSSituationMoveTrigger::execGetIdealTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_inReceiverTransform);
		P_GET_PROPERTY(FIntProperty,Z_Param_inMoveId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetIdealTransform_Implementation(Z_Param_Out_inReceiverTransform,Z_Param_inMoveId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSSituationMoveTrigger::execGetMoveId)
	{
		P_GET_OBJECT(AELSSPlayer,Z_Param_inAttackPlayer);
		P_GET_OBJECT(AELSSPlayer,Z_Param_inReceivePlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMoveId_Implementation(Z_Param_inAttackPlayer,Z_Param_inReceivePlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSSituationMoveTrigger::execGetTriggerCollision)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBoxComponent**)Z_Param__Result=P_THIS->GetTriggerCollision();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSSituationMoveTrigger::execGetWaitReactionRowName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetWaitReactionRowName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSSituationMoveTrigger::execIsDisableCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDisableCamera();
		P_NATIVE_END;
	}
	static FName NAME_AELSSSituationMoveTrigger_ExecuteSituation = FName(TEXT("ExecuteSituation"));
	void AELSSSituationMoveTrigger::ExecuteSituation()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSSituationMoveTrigger_ExecuteSituation),NULL);
	}
	static FName NAME_AELSSSituationMoveTrigger_GetIdealLocationComponent = FName(TEXT("GetIdealLocationComponent"));
	USceneComponent* AELSSSituationMoveTrigger::GetIdealLocationComponent(int32 inMoveId) const
	{
		ELSSSituationMoveTrigger_eventGetIdealLocationComponent_Parms Parms;
		Parms.inMoveId=inMoveId;
		const_cast<AELSSSituationMoveTrigger*>(this)->ProcessEvent(FindFunctionChecked(NAME_AELSSSituationMoveTrigger_GetIdealLocationComponent),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AELSSSituationMoveTrigger_GetIdealTransform = FName(TEXT("GetIdealTransform"));
	FTransform AELSSSituationMoveTrigger::GetIdealTransform(FTransform const& inReceiverTransform, int32 inMoveId) const
	{
		ELSSSituationMoveTrigger_eventGetIdealTransform_Parms Parms;
		Parms.inReceiverTransform=inReceiverTransform;
		Parms.inMoveId=inMoveId;
		const_cast<AELSSSituationMoveTrigger*>(this)->ProcessEvent(FindFunctionChecked(NAME_AELSSSituationMoveTrigger_GetIdealTransform),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AELSSSituationMoveTrigger_GetMoveId = FName(TEXT("GetMoveId"));
	int32 AELSSSituationMoveTrigger::GetMoveId(AELSSPlayer* inAttackPlayer, AELSSPlayer* inReceivePlayer) const
	{
		ELSSSituationMoveTrigger_eventGetMoveId_Parms Parms;
		Parms.inAttackPlayer=inAttackPlayer;
		Parms.inReceivePlayer=inReceivePlayer;
		const_cast<AELSSSituationMoveTrigger*>(this)->ProcessEvent(FindFunctionChecked(NAME_AELSSSituationMoveTrigger_GetMoveId),&Parms);
		return Parms.ReturnValue;
	}
	void AELSSSituationMoveTrigger::StaticRegisterNativesAELSSSituationMoveTrigger()
	{
		UClass* Class = AELSSSituationMoveTrigger::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteSituation", &AELSSSituationMoveTrigger::execExecuteSituation },
			{ "GetCameraOffset", &AELSSSituationMoveTrigger::execGetCameraOffset },
			{ "GetIdealLocation", &AELSSSituationMoveTrigger::execGetIdealLocation },
			{ "GetIdealLocationComponent", &AELSSSituationMoveTrigger::execGetIdealLocationComponent },
			{ "GetIdealTransform", &AELSSSituationMoveTrigger::execGetIdealTransform },
			{ "GetMoveId", &AELSSSituationMoveTrigger::execGetMoveId },
			{ "GetTriggerCollision", &AELSSSituationMoveTrigger::execGetTriggerCollision },
			{ "GetWaitReactionRowName", &AELSSSituationMoveTrigger::execGetWaitReactionRowName },
			{ "IsDisableCamera", &AELSSSituationMoveTrigger::execIsDisableCamera },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSSituationMoveTrigger_ExecuteSituation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSituationMoveTrigger_ExecuteSituation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSituationMoveTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSituationMoveTrigger_ExecuteSituation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSituationMoveTrigger, nullptr, "ExecuteSituation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSituationMoveTrigger_ExecuteSituation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSituationMoveTrigger_ExecuteSituation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSituationMoveTrigger_ExecuteSituation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSituationMoveTrigger_ExecuteSituation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSSituationMoveTrigger_GetCameraOffset_Statics
	{
		struct ELSSSituationMoveTrigger_eventGetCameraOffset_Parms
		{
			FVector inActionSyncLocation;
			int32 inMoveId;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inActionSyncLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inActionSyncLocation;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inMoveId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSituationMoveTrigger_GetCameraOffset_Statics::NewProp_inActionSyncLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSSituationMoveTrigger_GetCameraOffset_Statics::NewProp_inActionSyncLocation = { "inActionSyncLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSituationMoveTrigger_eventGetCameraOffset_Parms, inActionSyncLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AELSSSituationMoveTrigger_GetCameraOffset_Statics::NewProp_inActionSyncLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSituationMoveTrigger_GetCameraOffset_Statics::NewProp_inActionSyncLocation_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSSituationMoveTrigger_GetCameraOffset_Statics::NewProp_inMoveId = { "inMoveId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSituationMoveTrigger_eventGetCameraOffset_Parms, inMoveId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSSituationMoveTrigger_GetCameraOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSituationMoveTrigger_eventGetCameraOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSSituationMoveTrigger_GetCameraOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSituationMoveTrigger_GetCameraOffset_Statics::NewProp_inActionSyncLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSituationMoveTrigger_GetCameraOffset_Statics::NewProp_inMoveId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSituationMoveTrigger_GetCameraOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSituationMoveTrigger_GetCameraOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSituationMoveTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSituationMoveTrigger_GetCameraOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSituationMoveTrigger, nullptr, "GetCameraOffset", nullptr, nullptr, sizeof(ELSSSituationMoveTrigger_eventGetCameraOffset_Parms), Z_Construct_UFunction_AELSSSituationMoveTrigger_GetCameraOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSituationMoveTrigger_GetCameraOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSituationMoveTrigger_GetCameraOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSituationMoveTrigger_GetCameraOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSituationMoveTrigger_GetCameraOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSituationMoveTrigger_GetCameraOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealLocation_Statics
	{
		struct ELSSSituationMoveTrigger_eventGetIdealLocation_Parms
		{
			FTransform inReceiverTransform;
			USceneComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inReceiverTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inReceiverTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealLocation_Statics::NewProp_inReceiverTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealLocation_Statics::NewProp_inReceiverTransform = { "inReceiverTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSituationMoveTrigger_eventGetIdealLocation_Parms, inReceiverTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealLocation_Statics::NewProp_inReceiverTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealLocation_Statics::NewProp_inReceiverTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealLocation_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSituationMoveTrigger_eventGetIdealLocation_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealLocation_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealLocation_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealLocation_Statics::NewProp_inReceiverTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSituationMoveTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSituationMoveTrigger, nullptr, "GetIdealLocation", nullptr, nullptr, sizeof(ELSSSituationMoveTrigger_eventGetIdealLocation_Parms), Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealLocationComponent_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inMoveId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealLocationComponent_Statics::NewProp_inMoveId = { "inMoveId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSituationMoveTrigger_eventGetIdealLocationComponent_Parms, inMoveId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealLocationComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealLocationComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSituationMoveTrigger_eventGetIdealLocationComponent_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealLocationComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealLocationComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealLocationComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealLocationComponent_Statics::NewProp_inMoveId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealLocationComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealLocationComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSituationMoveTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealLocationComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSituationMoveTrigger, nullptr, "GetIdealLocationComponent", nullptr, nullptr, sizeof(ELSSSituationMoveTrigger_eventGetIdealLocationComponent_Parms), Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealLocationComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealLocationComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealLocationComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealLocationComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealLocationComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealLocationComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inReceiverTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inReceiverTransform;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inMoveId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealTransform_Statics::NewProp_inReceiverTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealTransform_Statics::NewProp_inReceiverTransform = { "inReceiverTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSituationMoveTrigger_eventGetIdealTransform_Parms, inReceiverTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealTransform_Statics::NewProp_inReceiverTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealTransform_Statics::NewProp_inReceiverTransform_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealTransform_Statics::NewProp_inMoveId = { "inMoveId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSituationMoveTrigger_eventGetIdealTransform_Parms, inMoveId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSituationMoveTrigger_eventGetIdealTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealTransform_Statics::NewProp_inReceiverTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealTransform_Statics::NewProp_inMoveId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSituationMoveTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSituationMoveTrigger, nullptr, "GetIdealTransform", nullptr, nullptr, sizeof(ELSSSituationMoveTrigger_eventGetIdealTransform_Parms), Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSSituationMoveTrigger_GetMoveId_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inAttackPlayer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inReceivePlayer;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSSituationMoveTrigger_GetMoveId_Statics::NewProp_inAttackPlayer = { "inAttackPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSituationMoveTrigger_eventGetMoveId_Parms, inAttackPlayer), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSSituationMoveTrigger_GetMoveId_Statics::NewProp_inReceivePlayer = { "inReceivePlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSituationMoveTrigger_eventGetMoveId_Parms, inReceivePlayer), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSSituationMoveTrigger_GetMoveId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSituationMoveTrigger_eventGetMoveId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSSituationMoveTrigger_GetMoveId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSituationMoveTrigger_GetMoveId_Statics::NewProp_inAttackPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSituationMoveTrigger_GetMoveId_Statics::NewProp_inReceivePlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSituationMoveTrigger_GetMoveId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSituationMoveTrigger_GetMoveId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSituationMoveTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSituationMoveTrigger_GetMoveId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSituationMoveTrigger, nullptr, "GetMoveId", nullptr, nullptr, sizeof(ELSSSituationMoveTrigger_eventGetMoveId_Parms), Z_Construct_UFunction_AELSSSituationMoveTrigger_GetMoveId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSituationMoveTrigger_GetMoveId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSituationMoveTrigger_GetMoveId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSituationMoveTrigger_GetMoveId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSituationMoveTrigger_GetMoveId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSituationMoveTrigger_GetMoveId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSSituationMoveTrigger_GetTriggerCollision_Statics
	{
		struct ELSSSituationMoveTrigger_eventGetTriggerCollision_Parms
		{
			UBoxComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSituationMoveTrigger_GetTriggerCollision_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSSituationMoveTrigger_GetTriggerCollision_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSituationMoveTrigger_eventGetTriggerCollision_Parms, ReturnValue), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSSituationMoveTrigger_GetTriggerCollision_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSituationMoveTrigger_GetTriggerCollision_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSSituationMoveTrigger_GetTriggerCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSituationMoveTrigger_GetTriggerCollision_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSituationMoveTrigger_GetTriggerCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSituationMoveTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSituationMoveTrigger_GetTriggerCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSituationMoveTrigger, nullptr, "GetTriggerCollision", nullptr, nullptr, sizeof(ELSSSituationMoveTrigger_eventGetTriggerCollision_Parms), Z_Construct_UFunction_AELSSSituationMoveTrigger_GetTriggerCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSituationMoveTrigger_GetTriggerCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSituationMoveTrigger_GetTriggerCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSituationMoveTrigger_GetTriggerCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSituationMoveTrigger_GetTriggerCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSituationMoveTrigger_GetTriggerCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSSituationMoveTrigger_GetWaitReactionRowName_Statics
	{
		struct ELSSSituationMoveTrigger_eventGetWaitReactionRowName_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AELSSSituationMoveTrigger_GetWaitReactionRowName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSituationMoveTrigger_eventGetWaitReactionRowName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSSituationMoveTrigger_GetWaitReactionRowName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSituationMoveTrigger_GetWaitReactionRowName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSituationMoveTrigger_GetWaitReactionRowName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSituationMoveTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSituationMoveTrigger_GetWaitReactionRowName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSituationMoveTrigger, nullptr, "GetWaitReactionRowName", nullptr, nullptr, sizeof(ELSSSituationMoveTrigger_eventGetWaitReactionRowName_Parms), Z_Construct_UFunction_AELSSSituationMoveTrigger_GetWaitReactionRowName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSituationMoveTrigger_GetWaitReactionRowName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSituationMoveTrigger_GetWaitReactionRowName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSituationMoveTrigger_GetWaitReactionRowName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSituationMoveTrigger_GetWaitReactionRowName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSituationMoveTrigger_GetWaitReactionRowName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSSituationMoveTrigger_IsDisableCamera_Statics
	{
		struct ELSSSituationMoveTrigger_eventIsDisableCamera_Parms
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
	void Z_Construct_UFunction_AELSSSituationMoveTrigger_IsDisableCamera_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSSituationMoveTrigger_eventIsDisableCamera_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSSituationMoveTrigger_IsDisableCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSSituationMoveTrigger_eventIsDisableCamera_Parms), &Z_Construct_UFunction_AELSSSituationMoveTrigger_IsDisableCamera_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSSituationMoveTrigger_IsDisableCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSituationMoveTrigger_IsDisableCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSituationMoveTrigger_IsDisableCamera_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSituationMoveTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSituationMoveTrigger_IsDisableCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSituationMoveTrigger, nullptr, "IsDisableCamera", nullptr, nullptr, sizeof(ELSSSituationMoveTrigger_eventIsDisableCamera_Parms), Z_Construct_UFunction_AELSSSituationMoveTrigger_IsDisableCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSituationMoveTrigger_IsDisableCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSituationMoveTrigger_IsDisableCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSituationMoveTrigger_IsDisableCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSituationMoveTrigger_IsDisableCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSituationMoveTrigger_IsDisableCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSSituationMoveTrigger_NoRegister()
	{
		return AELSSSituationMoveTrigger::StaticClass();
	}
	struct Z_Construct_UClass_AELSSSituationMoveTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdealLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IdealLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveIdNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MoveIdNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveIdNormalBackDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MoveIdNormalBackDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveIdHighFly_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MoveIdHighFly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveIdHighFlyBackDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MoveIdHighFlyBackDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveIdPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MoveIdPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveIdPowerBackDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MoveIdPowerBackDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableCamera_MetaData[];
#endif
		static void NewProp_DisableCamera_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaitReactionRowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WaitReactionRowName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetToReceiverY_MetaData[];
#endif
		static void NewProp_OffsetToReceiverY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OffsetToReceiverY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetCamera_MetaData[];
#endif
		static void NewProp_OffsetCamera_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OffsetCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableIdealLocation_MetaData[];
#endif
		static void NewProp_DisableIdealLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableIdealLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableCameraLocator_MetaData[];
#endif
		static void NewProp_DisableCameraLocator_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableCameraLocator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableForwardCheck_MetaData[];
#endif
		static void NewProp_DisableForwardCheck_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableForwardCheck;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSSituationMoveTrigger_ExecuteSituation, "ExecuteSituation" }, // 3717801139
		{ &Z_Construct_UFunction_AELSSSituationMoveTrigger_GetCameraOffset, "GetCameraOffset" }, // 3803955436
		{ &Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealLocation, "GetIdealLocation" }, // 1399106883
		{ &Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealLocationComponent, "GetIdealLocationComponent" }, // 1911925687
		{ &Z_Construct_UFunction_AELSSSituationMoveTrigger_GetIdealTransform, "GetIdealTransform" }, // 1773396499
		{ &Z_Construct_UFunction_AELSSSituationMoveTrigger_GetMoveId, "GetMoveId" }, // 2863214907
		{ &Z_Construct_UFunction_AELSSSituationMoveTrigger_GetTriggerCollision, "GetTriggerCollision" }, // 2576706607
		{ &Z_Construct_UFunction_AELSSSituationMoveTrigger_GetWaitReactionRowName, "GetWaitReactionRowName" }, // 151742470
		{ &Z_Construct_UFunction_AELSSSituationMoveTrigger_IsDisableCamera, "IsDisableCamera" }, // 2693116714
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSSituationMoveTrigger.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSSituationMoveTrigger.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_TriggerCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSSituationMoveTrigger" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSSituationMoveTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_TriggerCollision = { "TriggerCollision", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSSituationMoveTrigger, TriggerCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_TriggerCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_TriggerCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_IdealLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSSituationMoveTrigger" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSSituationMoveTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_IdealLocation = { "IdealLocation", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSSituationMoveTrigger, IdealLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_IdealLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_IdealLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_MoveIdNormal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSSituationMoveTrigger" },
		{ "ModuleRelativePath", "Public/ELSSSituationMoveTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_MoveIdNormal = { "MoveIdNormal", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSSituationMoveTrigger, MoveIdNormal), METADATA_PARAMS(Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_MoveIdNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_MoveIdNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_MoveIdNormalBackDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSSituationMoveTrigger" },
		{ "ModuleRelativePath", "Public/ELSSSituationMoveTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_MoveIdNormalBackDamage = { "MoveIdNormalBackDamage", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSSituationMoveTrigger, MoveIdNormalBackDamage), METADATA_PARAMS(Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_MoveIdNormalBackDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_MoveIdNormalBackDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_MoveIdHighFly_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSSituationMoveTrigger" },
		{ "ModuleRelativePath", "Public/ELSSSituationMoveTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_MoveIdHighFly = { "MoveIdHighFly", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSSituationMoveTrigger, MoveIdHighFly), METADATA_PARAMS(Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_MoveIdHighFly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_MoveIdHighFly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_MoveIdHighFlyBackDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSSituationMoveTrigger" },
		{ "ModuleRelativePath", "Public/ELSSSituationMoveTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_MoveIdHighFlyBackDamage = { "MoveIdHighFlyBackDamage", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSSituationMoveTrigger, MoveIdHighFlyBackDamage), METADATA_PARAMS(Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_MoveIdHighFlyBackDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_MoveIdHighFlyBackDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_MoveIdPower_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSSituationMoveTrigger" },
		{ "ModuleRelativePath", "Public/ELSSSituationMoveTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_MoveIdPower = { "MoveIdPower", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSSituationMoveTrigger, MoveIdPower), METADATA_PARAMS(Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_MoveIdPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_MoveIdPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_MoveIdPowerBackDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSSituationMoveTrigger" },
		{ "ModuleRelativePath", "Public/ELSSSituationMoveTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_MoveIdPowerBackDamage = { "MoveIdPowerBackDamage", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSSituationMoveTrigger, MoveIdPowerBackDamage), METADATA_PARAMS(Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_MoveIdPowerBackDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_MoveIdPowerBackDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_DisableCamera_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSSituationMoveTrigger" },
		{ "ModuleRelativePath", "Public/ELSSSituationMoveTrigger.h" },
	};
#endif
	void Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_DisableCamera_SetBit(void* Obj)
	{
		((AELSSSituationMoveTrigger*)Obj)->DisableCamera = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_DisableCamera = { "DisableCamera", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSSituationMoveTrigger), &Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_DisableCamera_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_DisableCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_DisableCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_WaitReactionRowName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSSituationMoveTrigger" },
		{ "ModuleRelativePath", "Public/ELSSSituationMoveTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_WaitReactionRowName = { "WaitReactionRowName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSSituationMoveTrigger, WaitReactionRowName), METADATA_PARAMS(Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_WaitReactionRowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_WaitReactionRowName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_OffsetToReceiverY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSSituationMoveTrigger" },
		{ "ModuleRelativePath", "Public/ELSSSituationMoveTrigger.h" },
	};
#endif
	void Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_OffsetToReceiverY_SetBit(void* Obj)
	{
		((AELSSSituationMoveTrigger*)Obj)->OffsetToReceiverY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_OffsetToReceiverY = { "OffsetToReceiverY", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSSituationMoveTrigger), &Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_OffsetToReceiverY_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_OffsetToReceiverY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_OffsetToReceiverY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_OffsetCamera_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSSituationMoveTrigger" },
		{ "ModuleRelativePath", "Public/ELSSSituationMoveTrigger.h" },
	};
#endif
	void Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_OffsetCamera_SetBit(void* Obj)
	{
		((AELSSSituationMoveTrigger*)Obj)->OffsetCamera = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_OffsetCamera = { "OffsetCamera", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSSituationMoveTrigger), &Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_OffsetCamera_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_OffsetCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_OffsetCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_DisableIdealLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSSituationMoveTrigger" },
		{ "ModuleRelativePath", "Public/ELSSSituationMoveTrigger.h" },
	};
#endif
	void Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_DisableIdealLocation_SetBit(void* Obj)
	{
		((AELSSSituationMoveTrigger*)Obj)->DisableIdealLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_DisableIdealLocation = { "DisableIdealLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSSituationMoveTrigger), &Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_DisableIdealLocation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_DisableIdealLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_DisableIdealLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_DisableCameraLocator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSSituationMoveTrigger" },
		{ "ModuleRelativePath", "Public/ELSSSituationMoveTrigger.h" },
	};
#endif
	void Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_DisableCameraLocator_SetBit(void* Obj)
	{
		((AELSSSituationMoveTrigger*)Obj)->DisableCameraLocator = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_DisableCameraLocator = { "DisableCameraLocator", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSSituationMoveTrigger), &Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_DisableCameraLocator_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_DisableCameraLocator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_DisableCameraLocator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_DisableForwardCheck_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSSituationMoveTrigger" },
		{ "ModuleRelativePath", "Public/ELSSSituationMoveTrigger.h" },
	};
#endif
	void Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_DisableForwardCheck_SetBit(void* Obj)
	{
		((AELSSSituationMoveTrigger*)Obj)->DisableForwardCheck = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_DisableForwardCheck = { "DisableForwardCheck", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSSituationMoveTrigger), &Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_DisableForwardCheck_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_DisableForwardCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_DisableForwardCheck_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_TriggerCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_IdealLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_MoveIdNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_MoveIdNormalBackDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_MoveIdHighFly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_MoveIdHighFlyBackDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_MoveIdPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_MoveIdPowerBackDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_DisableCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_WaitReactionRowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_OffsetToReceiverY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_OffsetCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_DisableIdealLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_DisableCameraLocator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::NewProp_DisableForwardCheck,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSSituationMoveTrigger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::ClassParams = {
		&AELSSSituationMoveTrigger::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSSituationMoveTrigger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSSituationMoveTrigger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSSituationMoveTrigger, 407075598);
	template<> ABP_200508_API UClass* StaticClass<AELSSSituationMoveTrigger>()
	{
		return AELSSSituationMoveTrigger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSSituationMoveTrigger(Z_Construct_UClass_AELSSSituationMoveTrigger, &AELSSSituationMoveTrigger::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSSituationMoveTrigger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSSituationMoveTrigger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
