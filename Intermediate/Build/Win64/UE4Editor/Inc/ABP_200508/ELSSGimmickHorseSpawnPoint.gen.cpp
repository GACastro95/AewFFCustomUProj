// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSGimmickHorseSpawnPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSGimmickHorseSpawnPoint() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSGimmickHorseSpawnPoint_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSGimmickHorseSpawnPoint();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSGimmickInteractable();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPlayer_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELSSGimmickHorseSpawnPoint::execOnRep_IsSpawned)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsSpawned();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGimmickHorseSpawnPoint::execOnSpawned_Multicast)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSpawned_Multicast_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGimmickHorseSpawnPoint::execSetIsSpawned)
	{
		P_GET_UBOOL(Z_Param_NewIsSpawned);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsSpawned(Z_Param_NewIsSpawned);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGimmickHorseSpawnPoint::execSpawnVehicle)
	{
		P_GET_OBJECT(AELSSPlayer,Z_Param_inInteractPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnVehicle(Z_Param_inInteractPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSGimmickHorseSpawnPoint::execSpawnVehicle_Server)
	{
		P_GET_OBJECT(AELSSPlayer,Z_Param_inInteractPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnVehicle_Server_Implementation(Z_Param_inInteractPlayer);
		P_NATIVE_END;
	}
	static FName NAME_AELSSGimmickHorseSpawnPoint_GetMesh = FName(TEXT("GetMesh"));
	UMeshComponent* AELSSGimmickHorseSpawnPoint::GetMesh() const
	{
		ELSSGimmickHorseSpawnPoint_eventGetMesh_Parms Parms;
		const_cast<AELSSGimmickHorseSpawnPoint*>(this)->ProcessEvent(FindFunctionChecked(NAME_AELSSGimmickHorseSpawnPoint_GetMesh),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AELSSGimmickHorseSpawnPoint_GetSpawnTransform = FName(TEXT("GetSpawnTransform"));
	FTransform AELSSGimmickHorseSpawnPoint::GetSpawnTransform() const
	{
		ELSSGimmickHorseSpawnPoint_eventGetSpawnTransform_Parms Parms;
		const_cast<AELSSGimmickHorseSpawnPoint*>(this)->ProcessEvent(FindFunctionChecked(NAME_AELSSGimmickHorseSpawnPoint_GetSpawnTransform),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AELSSGimmickHorseSpawnPoint_OnSpawned_Multicast = FName(TEXT("OnSpawned_Multicast"));
	void AELSSGimmickHorseSpawnPoint::OnSpawned_Multicast()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSGimmickHorseSpawnPoint_OnSpawned_Multicast),NULL);
	}
	static FName NAME_AELSSGimmickHorseSpawnPoint_SetEnableGimmick = FName(TEXT("SetEnableGimmick"));
	void AELSSGimmickHorseSpawnPoint::SetEnableGimmick(bool Enable)
	{
		ELSSGimmickHorseSpawnPoint_eventSetEnableGimmick_Parms Parms;
		Parms.Enable=Enable ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELSSGimmickHorseSpawnPoint_SetEnableGimmick),&Parms);
	}
	static FName NAME_AELSSGimmickHorseSpawnPoint_SpawnVehicle_Server = FName(TEXT("SpawnVehicle_Server"));
	void AELSSGimmickHorseSpawnPoint::SpawnVehicle_Server(AELSSPlayer* inInteractPlayer)
	{
		ELSSGimmickHorseSpawnPoint_eventSpawnVehicle_Server_Parms Parms;
		Parms.inInteractPlayer=inInteractPlayer;
		ProcessEvent(FindFunctionChecked(NAME_AELSSGimmickHorseSpawnPoint_SpawnVehicle_Server),&Parms);
	}
	void AELSSGimmickHorseSpawnPoint::StaticRegisterNativesAELSSGimmickHorseSpawnPoint()
	{
		UClass* Class = AELSSGimmickHorseSpawnPoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_IsSpawned", &AELSSGimmickHorseSpawnPoint::execOnRep_IsSpawned },
			{ "OnSpawned_Multicast", &AELSSGimmickHorseSpawnPoint::execOnSpawned_Multicast },
			{ "SetIsSpawned", &AELSSGimmickHorseSpawnPoint::execSetIsSpawned },
			{ "SpawnVehicle", &AELSSGimmickHorseSpawnPoint::execSpawnVehicle },
			{ "SpawnVehicle_Server", &AELSSGimmickHorseSpawnPoint::execSpawnVehicle_Server },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_GetMesh_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_GetMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_GetMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGimmickHorseSpawnPoint_eventGetMesh_Parms, ReturnValue), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_GetMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_GetMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_GetMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_GetMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_GetMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGimmickHorseSpawnPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_GetMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGimmickHorseSpawnPoint, nullptr, "GetMesh", nullptr, nullptr, sizeof(ELSSGimmickHorseSpawnPoint_eventGetMesh_Parms), Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_GetMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_GetMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_GetMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_GetMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_GetMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_GetMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_GetSpawnTransform_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_GetSpawnTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGimmickHorseSpawnPoint_eventGetSpawnTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_GetSpawnTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_GetSpawnTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_GetSpawnTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGimmickHorseSpawnPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_GetSpawnTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGimmickHorseSpawnPoint, nullptr, "GetSpawnTransform", nullptr, nullptr, sizeof(ELSSGimmickHorseSpawnPoint_eventGetSpawnTransform_Parms), Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_GetSpawnTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_GetSpawnTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C880800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_GetSpawnTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_GetSpawnTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_GetSpawnTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_GetSpawnTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_OnRep_IsSpawned_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_OnRep_IsSpawned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGimmickHorseSpawnPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_OnRep_IsSpawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGimmickHorseSpawnPoint, nullptr, "OnRep_IsSpawned", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_OnRep_IsSpawned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_OnRep_IsSpawned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_OnRep_IsSpawned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_OnRep_IsSpawned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_OnSpawned_Multicast_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_OnSpawned_Multicast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGimmickHorseSpawnPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_OnSpawned_Multicast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGimmickHorseSpawnPoint, nullptr, "OnSpawned_Multicast", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_OnSpawned_Multicast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_OnSpawned_Multicast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_OnSpawned_Multicast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_OnSpawned_Multicast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SetEnableGimmick_Statics
	{
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SetEnableGimmick_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((ELSSGimmickHorseSpawnPoint_eventSetEnableGimmick_Parms*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SetEnableGimmick_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGimmickHorseSpawnPoint_eventSetEnableGimmick_Parms), &Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SetEnableGimmick_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SetEnableGimmick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SetEnableGimmick_Statics::NewProp_Enable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SetEnableGimmick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGimmickHorseSpawnPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SetEnableGimmick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGimmickHorseSpawnPoint, nullptr, "SetEnableGimmick", nullptr, nullptr, sizeof(ELSSGimmickHorseSpawnPoint_eventSetEnableGimmick_Parms), Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SetEnableGimmick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SetEnableGimmick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SetEnableGimmick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SetEnableGimmick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SetEnableGimmick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SetEnableGimmick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SetIsSpawned_Statics
	{
		struct ELSSGimmickHorseSpawnPoint_eventSetIsSpawned_Parms
		{
			bool NewIsSpawned;
		};
		static void NewProp_NewIsSpawned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewIsSpawned;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SetIsSpawned_Statics::NewProp_NewIsSpawned_SetBit(void* Obj)
	{
		((ELSSGimmickHorseSpawnPoint_eventSetIsSpawned_Parms*)Obj)->NewIsSpawned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SetIsSpawned_Statics::NewProp_NewIsSpawned = { "NewIsSpawned", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGimmickHorseSpawnPoint_eventSetIsSpawned_Parms), &Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SetIsSpawned_Statics::NewProp_NewIsSpawned_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SetIsSpawned_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SetIsSpawned_Statics::NewProp_NewIsSpawned,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SetIsSpawned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGimmickHorseSpawnPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SetIsSpawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGimmickHorseSpawnPoint, nullptr, "SetIsSpawned", nullptr, nullptr, sizeof(ELSSGimmickHorseSpawnPoint_eventSetIsSpawned_Parms), Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SetIsSpawned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SetIsSpawned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SetIsSpawned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SetIsSpawned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SetIsSpawned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SetIsSpawned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SpawnVehicle_Statics
	{
		struct ELSSGimmickHorseSpawnPoint_eventSpawnVehicle_Parms
		{
			AELSSPlayer* inInteractPlayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inInteractPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SpawnVehicle_Statics::NewProp_inInteractPlayer = { "inInteractPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGimmickHorseSpawnPoint_eventSpawnVehicle_Parms, inInteractPlayer), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SpawnVehicle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SpawnVehicle_Statics::NewProp_inInteractPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SpawnVehicle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGimmickHorseSpawnPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SpawnVehicle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGimmickHorseSpawnPoint, nullptr, "SpawnVehicle", nullptr, nullptr, sizeof(ELSSGimmickHorseSpawnPoint_eventSpawnVehicle_Parms), Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SpawnVehicle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SpawnVehicle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SpawnVehicle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SpawnVehicle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SpawnVehicle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SpawnVehicle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SpawnVehicle_Server_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inInteractPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SpawnVehicle_Server_Statics::NewProp_inInteractPlayer = { "inInteractPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGimmickHorseSpawnPoint_eventSpawnVehicle_Server_Parms, inInteractPlayer), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SpawnVehicle_Server_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SpawnVehicle_Server_Statics::NewProp_inInteractPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SpawnVehicle_Server_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGimmickHorseSpawnPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SpawnVehicle_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSGimmickHorseSpawnPoint, nullptr, "SpawnVehicle_Server", nullptr, nullptr, sizeof(ELSSGimmickHorseSpawnPoint_eventSpawnVehicle_Server_Parms), Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SpawnVehicle_Server_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SpawnVehicle_Server_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SpawnVehicle_Server_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SpawnVehicle_Server_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SpawnVehicle_Server()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SpawnVehicle_Server_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSGimmickHorseSpawnPoint_NoRegister()
	{
		return AELSSGimmickHorseSpawnPoint::StaticClass();
	}
	struct Z_Construct_UClass_AELSSGimmickHorseSpawnPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InteractDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnVehicleId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpawnVehicleId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedEffectDatabaseRowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SpawnedEffectDatabaseRowName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isSpawned_MetaData[];
#endif
		static void NewProp_isSpawned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSpawned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSGimmickHorseSpawnPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AELSSGimmickInteractable,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSGimmickHorseSpawnPoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_GetMesh, "GetMesh" }, // 2686724047
		{ &Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_GetSpawnTransform, "GetSpawnTransform" }, // 2852543513
		{ &Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_OnRep_IsSpawned, "OnRep_IsSpawned" }, // 3194725853
		{ &Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_OnSpawned_Multicast, "OnSpawned_Multicast" }, // 637870934
		{ &Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SetEnableGimmick, "SetEnableGimmick" }, // 180075381
		{ &Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SetIsSpawned, "SetIsSpawned" }, // 1329124149
		{ &Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SpawnVehicle, "SpawnVehicle" }, // 468340568
		{ &Z_Construct_UFunction_AELSSGimmickHorseSpawnPoint_SpawnVehicle_Server, "SpawnVehicle_Server" }, // 3760584478
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGimmickHorseSpawnPoint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSGimmickHorseSpawnPoint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSGimmickHorseSpawnPoint.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGimmickHorseSpawnPoint_Statics::NewProp_InteractDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGimmickHorseSpawnPoint" },
		{ "ModuleRelativePath", "Public/ELSSGimmickHorseSpawnPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSGimmickHorseSpawnPoint_Statics::NewProp_InteractDuration = { "InteractDuration", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGimmickHorseSpawnPoint, InteractDuration), METADATA_PARAMS(Z_Construct_UClass_AELSSGimmickHorseSpawnPoint_Statics::NewProp_InteractDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGimmickHorseSpawnPoint_Statics::NewProp_InteractDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGimmickHorseSpawnPoint_Statics::NewProp_SpawnVehicleId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGimmickHorseSpawnPoint" },
		{ "ModuleRelativePath", "Public/ELSSGimmickHorseSpawnPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSGimmickHorseSpawnPoint_Statics::NewProp_SpawnVehicleId = { "SpawnVehicleId", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGimmickHorseSpawnPoint, SpawnVehicleId), METADATA_PARAMS(Z_Construct_UClass_AELSSGimmickHorseSpawnPoint_Statics::NewProp_SpawnVehicleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGimmickHorseSpawnPoint_Statics::NewProp_SpawnVehicleId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGimmickHorseSpawnPoint_Statics::NewProp_SpawnedEffectDatabaseRowName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGimmickHorseSpawnPoint" },
		{ "ModuleRelativePath", "Public/ELSSGimmickHorseSpawnPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AELSSGimmickHorseSpawnPoint_Statics::NewProp_SpawnedEffectDatabaseRowName = { "SpawnedEffectDatabaseRowName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGimmickHorseSpawnPoint, SpawnedEffectDatabaseRowName), METADATA_PARAMS(Z_Construct_UClass_AELSSGimmickHorseSpawnPoint_Statics::NewProp_SpawnedEffectDatabaseRowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGimmickHorseSpawnPoint_Statics::NewProp_SpawnedEffectDatabaseRowName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGimmickHorseSpawnPoint_Statics::NewProp_isSpawned_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGimmickHorseSpawnPoint" },
		{ "ModuleRelativePath", "Public/ELSSGimmickHorseSpawnPoint.h" },
	};
#endif
	void Z_Construct_UClass_AELSSGimmickHorseSpawnPoint_Statics::NewProp_isSpawned_SetBit(void* Obj)
	{
		((AELSSGimmickHorseSpawnPoint*)Obj)->isSpawned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELSSGimmickHorseSpawnPoint_Statics::NewProp_isSpawned = { "isSpawned", "OnRep_IsSpawned", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELSSGimmickHorseSpawnPoint), &Z_Construct_UClass_AELSSGimmickHorseSpawnPoint_Statics::NewProp_isSpawned_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELSSGimmickHorseSpawnPoint_Statics::NewProp_isSpawned_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGimmickHorseSpawnPoint_Statics::NewProp_isSpawned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGimmickHorseSpawnPoint_Statics::NewProp_SpawnedSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGimmickHorseSpawnPoint" },
		{ "ModuleRelativePath", "Public/ELSSGimmickHorseSpawnPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSGimmickHorseSpawnPoint_Statics::NewProp_SpawnedSound = { "SpawnedSound", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGimmickHorseSpawnPoint, SpawnedSound), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSGimmickHorseSpawnPoint_Statics::NewProp_SpawnedSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGimmickHorseSpawnPoint_Statics::NewProp_SpawnedSound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSGimmickHorseSpawnPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGimmickHorseSpawnPoint_Statics::NewProp_InteractDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGimmickHorseSpawnPoint_Statics::NewProp_SpawnVehicleId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGimmickHorseSpawnPoint_Statics::NewProp_SpawnedEffectDatabaseRowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGimmickHorseSpawnPoint_Statics::NewProp_isSpawned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGimmickHorseSpawnPoint_Statics::NewProp_SpawnedSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSGimmickHorseSpawnPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSGimmickHorseSpawnPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSGimmickHorseSpawnPoint_Statics::ClassParams = {
		&AELSSGimmickHorseSpawnPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSGimmickHorseSpawnPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGimmickHorseSpawnPoint_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSGimmickHorseSpawnPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGimmickHorseSpawnPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSGimmickHorseSpawnPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSGimmickHorseSpawnPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSGimmickHorseSpawnPoint, 4169443611);
	template<> ABP_200508_API UClass* StaticClass<AELSSGimmickHorseSpawnPoint>()
	{
		return AELSSGimmickHorseSpawnPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSGimmickHorseSpawnPoint(Z_Construct_UClass_AELSSGimmickHorseSpawnPoint, &AELSSGimmickHorseSpawnPoint::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSGimmickHorseSpawnPoint"), false, nullptr, nullptr, nullptr);

	void AELSSGimmickHorseSpawnPoint::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_isSpawned(TEXT("isSpawned"));

		const bool bIsValid = true
			&& Name_isSpawned == ClassReps[(int32)ENetFields_Private::isSpawned].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AELSSGimmickHorseSpawnPoint"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSGimmickHorseSpawnPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
