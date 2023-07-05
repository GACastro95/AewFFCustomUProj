// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSCharacterMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSCharacterMovementComponent() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSCharacterMovementComponent_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSCharacterMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSMoveRequestHistory();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSMoveResponse();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSMoveResult();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSStateRequestParam();
// End Cross Module References
	DEFINE_FUNCTION(UELSSCharacterMovementComponent::execOrientDesiredRotationToAccelerate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OrientDesiredRotationToAccelerate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCharacterMovementComponent::execSetDesiredRotation)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_inRotatioCn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDesiredRotation(Z_Param_Out_inRotatioCn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCharacterMovementComponent::execSSServerMove)
	{
		P_GET_STRUCT(FSSMoveRequestHistory,Z_Param_inRequest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SSServerMove_Implementation(Z_Param_inRequest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSCharacterMovementComponent::execSSServerMoveResponse)
	{
		P_GET_STRUCT(FSSMoveResponse,Z_Param_response);
		P_GET_PROPERTY(FIntProperty,Z_Param_inMultiMoved);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SSServerMoveResponse_Implementation(Z_Param_response,Z_Param_inMultiMoved);
		P_NATIVE_END;
	}
	static FName NAME_UELSSCharacterMovementComponent_SSServerMove = FName(TEXT("SSServerMove"));
	void UELSSCharacterMovementComponent::SSServerMove(FSSMoveRequestHistory const& inRequest)
	{
		ELSSCharacterMovementComponent_eventSSServerMove_Parms Parms;
		Parms.inRequest=inRequest;
		ProcessEvent(FindFunctionChecked(NAME_UELSSCharacterMovementComponent_SSServerMove),&Parms);
	}
	static FName NAME_UELSSCharacterMovementComponent_SSServerMoveResponse = FName(TEXT("SSServerMoveResponse"));
	void UELSSCharacterMovementComponent::SSServerMoveResponse(FSSMoveResponse const& response, int32 inMultiMoved)
	{
		ELSSCharacterMovementComponent_eventSSServerMoveResponse_Parms Parms;
		Parms.response=response;
		Parms.inMultiMoved=inMultiMoved;
		ProcessEvent(FindFunctionChecked(NAME_UELSSCharacterMovementComponent_SSServerMoveResponse),&Parms);
	}
	void UELSSCharacterMovementComponent::StaticRegisterNativesUELSSCharacterMovementComponent()
	{
		UClass* Class = UELSSCharacterMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OrientDesiredRotationToAccelerate", &UELSSCharacterMovementComponent::execOrientDesiredRotationToAccelerate },
			{ "SetDesiredRotation", &UELSSCharacterMovementComponent::execSetDesiredRotation },
			{ "SSServerMove", &UELSSCharacterMovementComponent::execSSServerMove },
			{ "SSServerMoveResponse", &UELSSCharacterMovementComponent::execSSServerMoveResponse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSCharacterMovementComponent_OrientDesiredRotationToAccelerate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCharacterMovementComponent_OrientDesiredRotationToAccelerate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCharacterMovementComponent_OrientDesiredRotationToAccelerate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCharacterMovementComponent, nullptr, "OrientDesiredRotationToAccelerate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCharacterMovementComponent_OrientDesiredRotationToAccelerate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCharacterMovementComponent_OrientDesiredRotationToAccelerate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCharacterMovementComponent_OrientDesiredRotationToAccelerate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCharacterMovementComponent_OrientDesiredRotationToAccelerate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCharacterMovementComponent_SetDesiredRotation_Statics
	{
		struct ELSSCharacterMovementComponent_eventSetDesiredRotation_Parms
		{
			FRotator inRotatioCn;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inRotatioCn_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inRotatioCn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCharacterMovementComponent_SetDesiredRotation_Statics::NewProp_inRotatioCn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCharacterMovementComponent_SetDesiredRotation_Statics::NewProp_inRotatioCn = { "inRotatioCn", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCharacterMovementComponent_eventSetDesiredRotation_Parms, inRotatioCn), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UELSSCharacterMovementComponent_SetDesiredRotation_Statics::NewProp_inRotatioCn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCharacterMovementComponent_SetDesiredRotation_Statics::NewProp_inRotatioCn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCharacterMovementComponent_SetDesiredRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCharacterMovementComponent_SetDesiredRotation_Statics::NewProp_inRotatioCn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCharacterMovementComponent_SetDesiredRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCharacterMovementComponent_SetDesiredRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCharacterMovementComponent, nullptr, "SetDesiredRotation", nullptr, nullptr, sizeof(ELSSCharacterMovementComponent_eventSetDesiredRotation_Parms), Z_Construct_UFunction_UELSSCharacterMovementComponent_SetDesiredRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCharacterMovementComponent_SetDesiredRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCharacterMovementComponent_SetDesiredRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCharacterMovementComponent_SetDesiredRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCharacterMovementComponent_SetDesiredRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCharacterMovementComponent_SetDesiredRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCharacterMovementComponent_SSServerMove_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inRequest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCharacterMovementComponent_SSServerMove_Statics::NewProp_inRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCharacterMovementComponent_SSServerMove_Statics::NewProp_inRequest = { "inRequest", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCharacterMovementComponent_eventSSServerMove_Parms, inRequest), Z_Construct_UScriptStruct_FSSMoveRequestHistory, METADATA_PARAMS(Z_Construct_UFunction_UELSSCharacterMovementComponent_SSServerMove_Statics::NewProp_inRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCharacterMovementComponent_SSServerMove_Statics::NewProp_inRequest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCharacterMovementComponent_SSServerMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCharacterMovementComponent_SSServerMove_Statics::NewProp_inRequest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCharacterMovementComponent_SSServerMove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCharacterMovementComponent_SSServerMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCharacterMovementComponent, nullptr, "SSServerMove", nullptr, nullptr, sizeof(ELSSCharacterMovementComponent_eventSSServerMove_Parms), Z_Construct_UFunction_UELSSCharacterMovementComponent_SSServerMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCharacterMovementComponent_SSServerMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04280C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCharacterMovementComponent_SSServerMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCharacterMovementComponent_SSServerMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCharacterMovementComponent_SSServerMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCharacterMovementComponent_SSServerMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSCharacterMovementComponent_SSServerMoveResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_response_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_response;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inMultiMoved;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCharacterMovementComponent_SSServerMoveResponse_Statics::NewProp_response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSCharacterMovementComponent_SSServerMoveResponse_Statics::NewProp_response = { "response", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCharacterMovementComponent_eventSSServerMoveResponse_Parms, response), Z_Construct_UScriptStruct_FSSMoveResponse, METADATA_PARAMS(Z_Construct_UFunction_UELSSCharacterMovementComponent_SSServerMoveResponse_Statics::NewProp_response_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCharacterMovementComponent_SSServerMoveResponse_Statics::NewProp_response_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSCharacterMovementComponent_SSServerMoveResponse_Statics::NewProp_inMultiMoved = { "inMultiMoved", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSCharacterMovementComponent_eventSSServerMoveResponse_Parms, inMultiMoved), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSCharacterMovementComponent_SSServerMoveResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCharacterMovementComponent_SSServerMoveResponse_Statics::NewProp_response,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSCharacterMovementComponent_SSServerMoveResponse_Statics::NewProp_inMultiMoved,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCharacterMovementComponent_SSServerMoveResponse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCharacterMovementComponent_SSServerMoveResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCharacterMovementComponent, nullptr, "SSServerMoveResponse", nullptr, nullptr, sizeof(ELSSCharacterMovementComponent_eventSSServerMoveResponse_Parms), Z_Construct_UFunction_UELSSCharacterMovementComponent_SSServerMoveResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCharacterMovementComponent_SSServerMoveResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05080C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCharacterMovementComponent_SSServerMoveResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCharacterMovementComponent_SSServerMoveResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCharacterMovementComponent_SSServerMoveResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCharacterMovementComponent_SSServerMoveResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSCharacterMovementComponent_NoRegister()
	{
		return UELSSCharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UELSSCharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastRootMotionVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastRootMotionVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartedVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartedVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DesiredRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredRotationKeepDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DesiredRotationKeepDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOrientDesiredRotationToAcc_MetaData[];
#endif
		static void NewProp_bOrientDesiredRotationToAcc_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOrientDesiredRotationToAcc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastReceivedServerMoveTimeStamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastReceivedServerMoveTimeStamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdealServerMoveTimeStamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IdealServerMoveTimeStamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerMoveDelayCurrent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ServerMoveDelayCurrent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerMoveDelayMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ServerMoveDelayMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveHistory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveHistory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveHistorySend_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveHistorySend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestTimeStamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RequestTimeStamp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SavedRtt_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SavedRtt_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SavedRtt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutonomousDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutonomousDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastPredictTimeStamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastPredictTimeStamp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveResults_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveResults_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MoveResults;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastReceivedClientMoveResponseTimeStamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastReceivedClientMoveResponseTimeStamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingStateRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PendingStateRequest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentStateRequestId_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_CurrentStateRequestId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AwaitStateRequest_MetaData[];
#endif
		static void NewProp_AwaitStateRequest_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AwaitStateRequest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitAwaitTimeStamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TransitAwaitTimeStamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitAwaitingTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TransitAwaitingTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AwaitSlowStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AwaitSlowStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AwaitSlowFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AwaitSlowFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredictSyncRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PredictSyncRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LargeDelayThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LargeDelayThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LargeDelayReduceFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LargeDelayReduceFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelaySyncRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelaySyncRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeStampOnHitStop_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStampOnHitStop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResponseCorrectLoc_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResponseCorrectLoc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResponseCorrectYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ResponseCorrectYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReservedStateRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReservedStateRequest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReservedStateRequestTimeStamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReservedStateRequestTimeStamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReserveRequestDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReserveRequestDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideReserveRequestDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverrideReserveRequestDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSimulatedMoving_MetaData[];
#endif
		static void NewProp_bSimulatedMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSimulatedMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientUpdatingOnBeginState_MetaData[];
#endif
		static void NewProp_ClientUpdatingOnBeginState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ClientUpdatingOnBeginState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoFallTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NoFallTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSCharacterMovementComponent_OrientDesiredRotationToAccelerate, "OrientDesiredRotationToAccelerate" }, // 3318349366
		{ &Z_Construct_UFunction_UELSSCharacterMovementComponent_SetDesiredRotation, "SetDesiredRotation" }, // 3838535810
		{ &Z_Construct_UFunction_UELSSCharacterMovementComponent_SSServerMove, "SSServerMove" }, // 820385296
		{ &Z_Construct_UFunction_UELSSCharacterMovementComponent_SSServerMoveResponse, "SSServerMoveResponse" }, // 2004673376
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ELSSCharacterMovementComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSCharacterMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_LastRootMotionVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_LastRootMotionVelocity = { "LastRootMotionVelocity", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCharacterMovementComponent, LastRootMotionVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_LastRootMotionVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_LastRootMotionVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_StartedVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_StartedVelocity = { "StartedVelocity", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCharacterMovementComponent, StartedVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_StartedVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_StartedVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_DesiredRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_DesiredRotation = { "DesiredRotation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCharacterMovementComponent, DesiredRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_DesiredRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_DesiredRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_DesiredRotationKeepDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_DesiredRotationKeepDuration = { "DesiredRotationKeepDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCharacterMovementComponent, DesiredRotationKeepDuration), METADATA_PARAMS(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_DesiredRotationKeepDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_DesiredRotationKeepDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_bOrientDesiredRotationToAcc_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSCharacterMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_bOrientDesiredRotationToAcc_SetBit(void* Obj)
	{
		((UELSSCharacterMovementComponent*)Obj)->bOrientDesiredRotationToAcc = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_bOrientDesiredRotationToAcc = { "bOrientDesiredRotationToAcc", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSCharacterMovementComponent), &Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_bOrientDesiredRotationToAcc_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_bOrientDesiredRotationToAcc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_bOrientDesiredRotationToAcc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_LastReceivedServerMoveTimeStamp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_LastReceivedServerMoveTimeStamp = { "LastReceivedServerMoveTimeStamp", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCharacterMovementComponent, LastReceivedServerMoveTimeStamp), METADATA_PARAMS(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_LastReceivedServerMoveTimeStamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_LastReceivedServerMoveTimeStamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_IdealServerMoveTimeStamp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_IdealServerMoveTimeStamp = { "IdealServerMoveTimeStamp", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCharacterMovementComponent, IdealServerMoveTimeStamp), METADATA_PARAMS(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_IdealServerMoveTimeStamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_IdealServerMoveTimeStamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_ServerMoveDelayCurrent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_ServerMoveDelayCurrent = { "ServerMoveDelayCurrent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCharacterMovementComponent, ServerMoveDelayCurrent), METADATA_PARAMS(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_ServerMoveDelayCurrent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_ServerMoveDelayCurrent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_ServerMoveDelayMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_ServerMoveDelayMax = { "ServerMoveDelayMax", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCharacterMovementComponent, ServerMoveDelayMax), METADATA_PARAMS(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_ServerMoveDelayMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_ServerMoveDelayMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_MoveHistory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_MoveHistory = { "MoveHistory", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCharacterMovementComponent, MoveHistory), Z_Construct_UScriptStruct_FSSMoveRequestHistory, METADATA_PARAMS(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_MoveHistory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_MoveHistory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_MoveHistorySend_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_MoveHistorySend = { "MoveHistorySend", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCharacterMovementComponent, MoveHistorySend), Z_Construct_UScriptStruct_FSSMoveRequestHistory, METADATA_PARAMS(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_MoveHistorySend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_MoveHistorySend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_RequestTimeStamp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_RequestTimeStamp = { "RequestTimeStamp", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCharacterMovementComponent, RequestTimeStamp), METADATA_PARAMS(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_RequestTimeStamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_RequestTimeStamp_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_SavedRtt_Inner = { "SavedRtt", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_SavedRtt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_SavedRtt = { "SavedRtt", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCharacterMovementComponent, SavedRtt), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_SavedRtt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_SavedRtt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_AutonomousDelay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_AutonomousDelay = { "AutonomousDelay", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCharacterMovementComponent, AutonomousDelay), METADATA_PARAMS(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_AutonomousDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_AutonomousDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_LastPredictTimeStamp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_LastPredictTimeStamp = { "LastPredictTimeStamp", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCharacterMovementComponent, LastPredictTimeStamp), METADATA_PARAMS(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_LastPredictTimeStamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_LastPredictTimeStamp_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_MoveResults_Inner = { "MoveResults", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSMoveResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_MoveResults_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_MoveResults = { "MoveResults", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCharacterMovementComponent, MoveResults), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_MoveResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_MoveResults_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_LastReceivedClientMoveResponseTimeStamp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_LastReceivedClientMoveResponseTimeStamp = { "LastReceivedClientMoveResponseTimeStamp", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCharacterMovementComponent, LastReceivedClientMoveResponseTimeStamp), METADATA_PARAMS(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_LastReceivedClientMoveResponseTimeStamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_LastReceivedClientMoveResponseTimeStamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_PendingStateRequest_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_PendingStateRequest = { "PendingStateRequest", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCharacterMovementComponent, PendingStateRequest), Z_Construct_UScriptStruct_FSSStateRequestParam, METADATA_PARAMS(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_PendingStateRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_PendingStateRequest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_CurrentStateRequestId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_CurrentStateRequestId = { "CurrentStateRequestId", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCharacterMovementComponent, CurrentStateRequestId), METADATA_PARAMS(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_CurrentStateRequestId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_CurrentStateRequestId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_AwaitStateRequest_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSCharacterMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_AwaitStateRequest_SetBit(void* Obj)
	{
		((UELSSCharacterMovementComponent*)Obj)->AwaitStateRequest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_AwaitStateRequest = { "AwaitStateRequest", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSCharacterMovementComponent), &Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_AwaitStateRequest_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_AwaitStateRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_AwaitStateRequest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_TransitAwaitTimeStamp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_TransitAwaitTimeStamp = { "TransitAwaitTimeStamp", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCharacterMovementComponent, TransitAwaitTimeStamp), METADATA_PARAMS(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_TransitAwaitTimeStamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_TransitAwaitTimeStamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_TransitAwaitingTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_TransitAwaitingTime = { "TransitAwaitingTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCharacterMovementComponent, TransitAwaitingTime), METADATA_PARAMS(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_TransitAwaitingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_TransitAwaitingTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_AwaitSlowStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_AwaitSlowStart = { "AwaitSlowStart", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCharacterMovementComponent, AwaitSlowStart), METADATA_PARAMS(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_AwaitSlowStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_AwaitSlowStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_AwaitSlowFactor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_AwaitSlowFactor = { "AwaitSlowFactor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCharacterMovementComponent, AwaitSlowFactor), METADATA_PARAMS(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_AwaitSlowFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_AwaitSlowFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_PredictSyncRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_PredictSyncRate = { "PredictSyncRate", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCharacterMovementComponent, PredictSyncRate), METADATA_PARAMS(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_PredictSyncRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_PredictSyncRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_LargeDelayThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_LargeDelayThreshold = { "LargeDelayThreshold", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCharacterMovementComponent, LargeDelayThreshold), METADATA_PARAMS(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_LargeDelayThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_LargeDelayThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_LargeDelayReduceFactor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_LargeDelayReduceFactor = { "LargeDelayReduceFactor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCharacterMovementComponent, LargeDelayReduceFactor), METADATA_PARAMS(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_LargeDelayReduceFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_LargeDelayReduceFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_DelaySyncRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_DelaySyncRate = { "DelaySyncRate", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCharacterMovementComponent, DelaySyncRate), METADATA_PARAMS(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_DelaySyncRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_DelaySyncRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_DelayInterpSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_DelayInterpSpeed = { "DelayInterpSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCharacterMovementComponent, DelayInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_DelayInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_DelayInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_TimeStampOnHitStop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_TimeStampOnHitStop = { "TimeStampOnHitStop", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCharacterMovementComponent, TimeStampOnHitStop), METADATA_PARAMS(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_TimeStampOnHitStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_TimeStampOnHitStop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_ResponseCorrectLoc_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_ResponseCorrectLoc = { "ResponseCorrectLoc", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCharacterMovementComponent, ResponseCorrectLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_ResponseCorrectLoc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_ResponseCorrectLoc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_ResponseCorrectYaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_ResponseCorrectYaw = { "ResponseCorrectYaw", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCharacterMovementComponent, ResponseCorrectYaw), METADATA_PARAMS(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_ResponseCorrectYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_ResponseCorrectYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_ReservedStateRequest_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_ReservedStateRequest = { "ReservedStateRequest", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCharacterMovementComponent, ReservedStateRequest), Z_Construct_UScriptStruct_FSSStateRequestParam, METADATA_PARAMS(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_ReservedStateRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_ReservedStateRequest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_ReservedStateRequestTimeStamp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_ReservedStateRequestTimeStamp = { "ReservedStateRequestTimeStamp", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCharacterMovementComponent, ReservedStateRequestTimeStamp), METADATA_PARAMS(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_ReservedStateRequestTimeStamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_ReservedStateRequestTimeStamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_ReserveRequestDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_ReserveRequestDuration = { "ReserveRequestDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCharacterMovementComponent, ReserveRequestDuration), METADATA_PARAMS(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_ReserveRequestDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_ReserveRequestDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_OverrideReserveRequestDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_OverrideReserveRequestDuration = { "OverrideReserveRequestDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCharacterMovementComponent, OverrideReserveRequestDuration), METADATA_PARAMS(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_OverrideReserveRequestDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_OverrideReserveRequestDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_bSimulatedMoving_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSCharacterMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_bSimulatedMoving_SetBit(void* Obj)
	{
		((UELSSCharacterMovementComponent*)Obj)->bSimulatedMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_bSimulatedMoving = { "bSimulatedMoving", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSCharacterMovementComponent), &Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_bSimulatedMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_bSimulatedMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_bSimulatedMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_ClientUpdatingOnBeginState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSCharacterMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_ClientUpdatingOnBeginState_SetBit(void* Obj)
	{
		((UELSSCharacterMovementComponent*)Obj)->ClientUpdatingOnBeginState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_ClientUpdatingOnBeginState = { "ClientUpdatingOnBeginState", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSCharacterMovementComponent), &Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_ClientUpdatingOnBeginState_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_ClientUpdatingOnBeginState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_ClientUpdatingOnBeginState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_NoFallTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCharacterMovementComponent" },
		{ "ModuleRelativePath", "Public/ELSSCharacterMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_NoFallTime = { "NoFallTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCharacterMovementComponent, NoFallTime), METADATA_PARAMS(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_NoFallTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_NoFallTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_LastRootMotionVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_StartedVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_DesiredRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_DesiredRotationKeepDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_bOrientDesiredRotationToAcc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_LastReceivedServerMoveTimeStamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_IdealServerMoveTimeStamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_ServerMoveDelayCurrent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_ServerMoveDelayMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_MoveHistory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_MoveHistorySend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_RequestTimeStamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_SavedRtt_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_SavedRtt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_AutonomousDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_LastPredictTimeStamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_MoveResults_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_MoveResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_LastReceivedClientMoveResponseTimeStamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_PendingStateRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_CurrentStateRequestId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_AwaitStateRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_TransitAwaitTimeStamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_TransitAwaitingTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_AwaitSlowStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_AwaitSlowFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_PredictSyncRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_LargeDelayThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_LargeDelayReduceFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_DelaySyncRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_DelayInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_TimeStampOnHitStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_ResponseCorrectLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_ResponseCorrectYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_ReservedStateRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_ReservedStateRequestTimeStamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_ReserveRequestDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_OverrideReserveRequestDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_bSimulatedMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_ClientUpdatingOnBeginState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::NewProp_NoFallTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSCharacterMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::ClassParams = {
		&UELSSCharacterMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSCharacterMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSCharacterMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSCharacterMovementComponent, 3372851445);
	template<> ABP_200508_API UClass* StaticClass<UELSSCharacterMovementComponent>()
	{
		return UELSSCharacterMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSCharacterMovementComponent(Z_Construct_UClass_UELSSCharacterMovementComponent, &UELSSCharacterMovementComponent::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSCharacterMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSCharacterMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
