// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELMovesCamera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMovesCamera() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELMovesCamera_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELMovesCamera();
	ELITE_GAME_API UClass* Z_Construct_UClass_AGameplayCamera();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_AELCharacter_Native_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCameraParam();
// End Cross Module References
	DEFINE_FUNCTION(AELMovesCamera::execGetDivingLookAtLocation)
	{
		P_GET_UBOOL(Z_Param_HeightScale);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetDivingLookAtLocation(Z_Param_HeightScale,Z_Param_Out_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELMovesCamera::execGetLookAtLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLookAtLocation(Z_Param_Out_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELMovesCamera::execUpdateLocation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_GET_UBOOL(Z_Param_HeightScale);
		P_GET_UBOOL(Z_Param_SkipInterpolation);
		P_GET_UBOOL(Z_Param_KeepLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateLocation(Z_Param_DeltaSeconds,Z_Param_HeightScale,Z_Param_SkipInterpolation,Z_Param_KeepLocation);
		P_NATIVE_END;
	}
	static FName NAME_AELMovesCamera_GetAspectRatio = FName(TEXT("GetAspectRatio"));
	float AELMovesCamera::GetAspectRatio()
	{
		ELMovesCamera_eventGetAspectRatio_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AELMovesCamera_GetAspectRatio),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AELMovesCamera_GetCharacters = FName(TEXT("GetCharacters"));
	void AELMovesCamera::GetCharacters(TArray<AELCharacter_Native*>& OutCharacters)
	{
		ELMovesCamera_eventGetCharacters_Parms Parms;
		Parms.OutCharacters=OutCharacters;
		ProcessEvent(FindFunctionChecked(NAME_AELMovesCamera_GetCharacters),&Parms);
		OutCharacters=Parms.OutCharacters;
	}
	static FName NAME_AELMovesCamera_GetFOVAngle = FName(TEXT("GetFOVAngle"));
	float AELMovesCamera::GetFOVAngle()
	{
		ELMovesCamera_eventGetFOVAngle_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AELMovesCamera_GetFOVAngle),&Parms);
		return Parms.ReturnValue;
	}
	void AELMovesCamera::StaticRegisterNativesAELMovesCamera()
	{
		UClass* Class = AELMovesCamera::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDivingLookAtLocation", &AELMovesCamera::execGetDivingLookAtLocation },
			{ "GetLookAtLocation", &AELMovesCamera::execGetLookAtLocation },
			{ "UpdateLocation", &AELMovesCamera::execUpdateLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELMovesCamera_GetAspectRatio_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELMovesCamera_GetAspectRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovesCamera_eventGetAspectRatio_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELMovesCamera_GetAspectRatio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovesCamera_GetAspectRatio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMovesCamera_GetAspectRatio_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMovesCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELMovesCamera_GetAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELMovesCamera, nullptr, "GetAspectRatio", nullptr, nullptr, sizeof(ELMovesCamera_eventGetAspectRatio_Parms), Z_Construct_UFunction_AELMovesCamera_GetAspectRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMovesCamera_GetAspectRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELMovesCamera_GetAspectRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMovesCamera_GetAspectRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELMovesCamera_GetAspectRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELMovesCamera_GetAspectRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELMovesCamera_GetCharacters_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutCharacters_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutCharacters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELMovesCamera_GetCharacters_Statics::NewProp_OutCharacters_Inner = { "OutCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AELCharacter_Native_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AELMovesCamera_GetCharacters_Statics::NewProp_OutCharacters = { "OutCharacters", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovesCamera_eventGetCharacters_Parms, OutCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELMovesCamera_GetCharacters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovesCamera_GetCharacters_Statics::NewProp_OutCharacters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovesCamera_GetCharacters_Statics::NewProp_OutCharacters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMovesCamera_GetCharacters_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMovesCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELMovesCamera_GetCharacters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELMovesCamera, nullptr, "GetCharacters", nullptr, nullptr, sizeof(ELMovesCamera_eventGetCharacters_Parms), Z_Construct_UFunction_AELMovesCamera_GetCharacters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMovesCamera_GetCharacters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELMovesCamera_GetCharacters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMovesCamera_GetCharacters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELMovesCamera_GetCharacters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELMovesCamera_GetCharacters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELMovesCamera_GetDivingLookAtLocation_Statics
	{
		struct ELMovesCamera_eventGetDivingLookAtLocation_Parms
		{
			bool HeightScale;
			FVector Location;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightScale_MetaData[];
#endif
		static void NewProp_HeightScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HeightScale;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMovesCamera_GetDivingLookAtLocation_Statics::NewProp_HeightScale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AELMovesCamera_GetDivingLookAtLocation_Statics::NewProp_HeightScale_SetBit(void* Obj)
	{
		((ELMovesCamera_eventGetDivingLookAtLocation_Parms*)Obj)->HeightScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELMovesCamera_GetDivingLookAtLocation_Statics::NewProp_HeightScale = { "HeightScale", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovesCamera_eventGetDivingLookAtLocation_Parms), &Z_Construct_UFunction_AELMovesCamera_GetDivingLookAtLocation_Statics::NewProp_HeightScale_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AELMovesCamera_GetDivingLookAtLocation_Statics::NewProp_HeightScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMovesCamera_GetDivingLookAtLocation_Statics::NewProp_HeightScale_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELMovesCamera_GetDivingLookAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovesCamera_eventGetDivingLookAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELMovesCamera_GetDivingLookAtLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovesCamera_GetDivingLookAtLocation_Statics::NewProp_HeightScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovesCamera_GetDivingLookAtLocation_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMovesCamera_GetDivingLookAtLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMovesCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELMovesCamera_GetDivingLookAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELMovesCamera, nullptr, "GetDivingLookAtLocation", nullptr, nullptr, sizeof(ELMovesCamera_eventGetDivingLookAtLocation_Parms), Z_Construct_UFunction_AELMovesCamera_GetDivingLookAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMovesCamera_GetDivingLookAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELMovesCamera_GetDivingLookAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMovesCamera_GetDivingLookAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELMovesCamera_GetDivingLookAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELMovesCamera_GetDivingLookAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELMovesCamera_GetFOVAngle_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELMovesCamera_GetFOVAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovesCamera_eventGetFOVAngle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELMovesCamera_GetFOVAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovesCamera_GetFOVAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMovesCamera_GetFOVAngle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMovesCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELMovesCamera_GetFOVAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELMovesCamera, nullptr, "GetFOVAngle", nullptr, nullptr, sizeof(ELMovesCamera_eventGetFOVAngle_Parms), Z_Construct_UFunction_AELMovesCamera_GetFOVAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMovesCamera_GetFOVAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELMovesCamera_GetFOVAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMovesCamera_GetFOVAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELMovesCamera_GetFOVAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELMovesCamera_GetFOVAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELMovesCamera_GetLookAtLocation_Statics
	{
		struct ELMovesCamera_eventGetLookAtLocation_Parms
		{
			FVector Location;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELMovesCamera_GetLookAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovesCamera_eventGetLookAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELMovesCamera_GetLookAtLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovesCamera_GetLookAtLocation_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMovesCamera_GetLookAtLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMovesCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELMovesCamera_GetLookAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELMovesCamera, nullptr, "GetLookAtLocation", nullptr, nullptr, sizeof(ELMovesCamera_eventGetLookAtLocation_Parms), Z_Construct_UFunction_AELMovesCamera_GetLookAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMovesCamera_GetLookAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELMovesCamera_GetLookAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMovesCamera_GetLookAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELMovesCamera_GetLookAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELMovesCamera_GetLookAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELMovesCamera_UpdateLocation_Statics
	{
		struct ELMovesCamera_eventUpdateLocation_Parms
		{
			float DeltaSeconds;
			bool HeightScale;
			bool SkipInterpolation;
			bool KeepLocation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightScale_MetaData[];
#endif
		static void NewProp_HeightScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HeightScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkipInterpolation_MetaData[];
#endif
		static void NewProp_SkipInterpolation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SkipInterpolation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeepLocation_MetaData[];
#endif
		static void NewProp_KeepLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_KeepLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMovesCamera_UpdateLocation_Statics::NewProp_DeltaSeconds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELMovesCamera_UpdateLocation_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovesCamera_eventUpdateLocation_Parms, DeltaSeconds), METADATA_PARAMS(Z_Construct_UFunction_AELMovesCamera_UpdateLocation_Statics::NewProp_DeltaSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMovesCamera_UpdateLocation_Statics::NewProp_DeltaSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMovesCamera_UpdateLocation_Statics::NewProp_HeightScale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AELMovesCamera_UpdateLocation_Statics::NewProp_HeightScale_SetBit(void* Obj)
	{
		((ELMovesCamera_eventUpdateLocation_Parms*)Obj)->HeightScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELMovesCamera_UpdateLocation_Statics::NewProp_HeightScale = { "HeightScale", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovesCamera_eventUpdateLocation_Parms), &Z_Construct_UFunction_AELMovesCamera_UpdateLocation_Statics::NewProp_HeightScale_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AELMovesCamera_UpdateLocation_Statics::NewProp_HeightScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMovesCamera_UpdateLocation_Statics::NewProp_HeightScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMovesCamera_UpdateLocation_Statics::NewProp_SkipInterpolation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AELMovesCamera_UpdateLocation_Statics::NewProp_SkipInterpolation_SetBit(void* Obj)
	{
		((ELMovesCamera_eventUpdateLocation_Parms*)Obj)->SkipInterpolation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELMovesCamera_UpdateLocation_Statics::NewProp_SkipInterpolation = { "SkipInterpolation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovesCamera_eventUpdateLocation_Parms), &Z_Construct_UFunction_AELMovesCamera_UpdateLocation_Statics::NewProp_SkipInterpolation_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AELMovesCamera_UpdateLocation_Statics::NewProp_SkipInterpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMovesCamera_UpdateLocation_Statics::NewProp_SkipInterpolation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMovesCamera_UpdateLocation_Statics::NewProp_KeepLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AELMovesCamera_UpdateLocation_Statics::NewProp_KeepLocation_SetBit(void* Obj)
	{
		((ELMovesCamera_eventUpdateLocation_Parms*)Obj)->KeepLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELMovesCamera_UpdateLocation_Statics::NewProp_KeepLocation = { "KeepLocation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovesCamera_eventUpdateLocation_Parms), &Z_Construct_UFunction_AELMovesCamera_UpdateLocation_Statics::NewProp_KeepLocation_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AELMovesCamera_UpdateLocation_Statics::NewProp_KeepLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMovesCamera_UpdateLocation_Statics::NewProp_KeepLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELMovesCamera_UpdateLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovesCamera_UpdateLocation_Statics::NewProp_DeltaSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovesCamera_UpdateLocation_Statics::NewProp_HeightScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovesCamera_UpdateLocation_Statics::NewProp_SkipInterpolation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELMovesCamera_UpdateLocation_Statics::NewProp_KeepLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELMovesCamera_UpdateLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMovesCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELMovesCamera_UpdateLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELMovesCamera, nullptr, "UpdateLocation", nullptr, nullptr, sizeof(ELMovesCamera_eventUpdateLocation_Parms), Z_Construct_UFunction_AELMovesCamera_UpdateLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMovesCamera_UpdateLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELMovesCamera_UpdateLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELMovesCamera_UpdateLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELMovesCamera_UpdateLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELMovesCamera_UpdateLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELMovesCamera_NoRegister()
	{
		return AELMovesCamera::StaticClass();
	}
	struct Z_Construct_UClass_AELMovesCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayCameraParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayCameraParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELMovesCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameplayCamera,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELMovesCamera_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELMovesCamera_GetAspectRatio, "GetAspectRatio" }, // 2123601742
		{ &Z_Construct_UFunction_AELMovesCamera_GetCharacters, "GetCharacters" }, // 8208328
		{ &Z_Construct_UFunction_AELMovesCamera_GetDivingLookAtLocation, "GetDivingLookAtLocation" }, // 421972787
		{ &Z_Construct_UFunction_AELMovesCamera_GetFOVAngle, "GetFOVAngle" }, // 2228570582
		{ &Z_Construct_UFunction_AELMovesCamera_GetLookAtLocation, "GetLookAtLocation" }, // 2358753700
		{ &Z_Construct_UFunction_AELMovesCamera_UpdateLocation, "UpdateLocation" }, // 850101329
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELMovesCamera_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELMovesCamera.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELMovesCamera.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELMovesCamera_Statics::NewProp_GameplayCameraParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesCamera" },
		{ "ModuleRelativePath", "Public/ELMovesCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELMovesCamera_Statics::NewProp_GameplayCameraParam = { "GameplayCameraParam", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELMovesCamera, GameplayCameraParam), Z_Construct_UScriptStruct_FGameplayCameraParam, METADATA_PARAMS(Z_Construct_UClass_AELMovesCamera_Statics::NewProp_GameplayCameraParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELMovesCamera_Statics::NewProp_GameplayCameraParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELMovesCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELMovesCamera_Statics::NewProp_GameplayCameraParam,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELMovesCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELMovesCamera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELMovesCamera_Statics::ClassParams = {
		&AELMovesCamera::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELMovesCamera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELMovesCamera_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELMovesCamera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELMovesCamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELMovesCamera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELMovesCamera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELMovesCamera, 2963478272);
	template<> ABP_200508_API UClass* StaticClass<AELMovesCamera>()
	{
		return AELMovesCamera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELMovesCamera(Z_Construct_UClass_AELMovesCamera, &AELMovesCamera::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELMovesCamera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELMovesCamera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
