// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESaveDataAccessorEvent : uint8;
class USaveData_AccessorBase;
enum class ESaveDataProcResult : uint8;
enum class ESaveDataType : uint8;
class UObject;
class UELSaveDataAccessObjectBase;
class USaveDataObjectBase;
#ifdef ELITE_ELSaveDataAccessObjectBase_generated_h
#error "ELSaveDataAccessObjectBase.generated.h already included, missing '#pragma once' in ELSaveDataAccessObjectBase.h"
#endif
#define ELITE_ELSaveDataAccessObjectBase_generated_h

#define AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObjectBase_h_21_SPARSE_DATA
#define AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObjectBase_h_21_RPC_WRAPPERS \
	virtual bool IsRequestComplete_Implementation(); \
	virtual bool IsSupportSaveDataType_Implementation(ESaveDataType const& SaveDataType); \
	virtual void OnCreatedData_Implementation(bool _isSuccess, USaveData_AccessorBase* _saveDataAccessor); \
	virtual void OnLoadedData_Implementation(bool _isSuccess, USaveData_AccessorBase* _saveDataAccessor); \
	virtual ESaveDataProcResult OnRequestTermination_Implementation(bool IsSuccess, const ESaveDataProcResult InProcResult); \
	virtual bool OnStartCreateData_Implementation(ESaveDataProcResult& ProcResult, ESaveDataType _saveDataType); \
	virtual bool OnStartLoadData_Implementation(ESaveDataProcResult& ProcResult, ESaveDataType _saveDataType); \
	virtual bool OnStartUpdateData_Implementation(ESaveDataProcResult& ProcResult, ESaveDataType _saveDataType); \
	virtual void OnUnbindAccessor_Implementation(USaveData_AccessorBase* SaveDataAccessor); \
	virtual bool ReadData_Implementation(USaveDataObjectBase* SaveDataObject); \
	virtual bool WriteData_Implementation(USaveDataObjectBase* SaveDataObject, bool bInitialize); \
 \
	DECLARE_FUNCTION(execCallback_RequestProcessEnd); \
	DECLARE_FUNCTION(execCreateData); \
	DECLARE_FUNCTION(execCreateSaveDataAccessObject); \
	DECLARE_FUNCTION(execGetLastResult); \
	DECLARE_FUNCTION(execGetRequestedSaveDataType); \
	DECLARE_FUNCTION(execGetSaveDataObject); \
	DECLARE_FUNCTION(execIsAccessCache); \
	DECLARE_FUNCTION(execIsRequestComplete); \
	DECLARE_FUNCTION(execIsSupportSaveDataType); \
	DECLARE_FUNCTION(execLoad); \
	DECLARE_FUNCTION(execLoadData); \
	DECLARE_FUNCTION(execOnCreatedData); \
	DECLARE_FUNCTION(execOnLoadedData); \
	DECLARE_FUNCTION(execOnRequestTermination); \
	DECLARE_FUNCTION(execOnStartCreateData); \
	DECLARE_FUNCTION(execOnStartLoadData); \
	DECLARE_FUNCTION(execOnStartUpdateData); \
	DECLARE_FUNCTION(execOnUnbindAccessor); \
	DECLARE_FUNCTION(execReadData); \
	DECLARE_FUNCTION(execRequestTermination); \
	DECLARE_FUNCTION(execSave); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execUpdateData); \
	DECLARE_FUNCTION(execWriteData);


#define AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObjectBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool IsRequestComplete_Implementation(); \
	virtual bool IsSupportSaveDataType_Implementation(ESaveDataType const& SaveDataType); \
	virtual void OnCreatedData_Implementation(bool _isSuccess, USaveData_AccessorBase* _saveDataAccessor); \
	virtual void OnLoadedData_Implementation(bool _isSuccess, USaveData_AccessorBase* _saveDataAccessor); \
	virtual ESaveDataProcResult OnRequestTermination_Implementation(bool IsSuccess, const ESaveDataProcResult InProcResult); \
	virtual bool OnStartCreateData_Implementation(ESaveDataProcResult& ProcResult, ESaveDataType _saveDataType); \
	virtual bool OnStartLoadData_Implementation(ESaveDataProcResult& ProcResult, ESaveDataType _saveDataType); \
	virtual bool OnStartUpdateData_Implementation(ESaveDataProcResult& ProcResult, ESaveDataType _saveDataType); \
	virtual void OnUnbindAccessor_Implementation(USaveData_AccessorBase* SaveDataAccessor); \
	virtual bool ReadData_Implementation(USaveDataObjectBase* SaveDataObject); \
	virtual bool WriteData_Implementation(USaveDataObjectBase* SaveDataObject, bool bInitialize); \
 \
	DECLARE_FUNCTION(execCallback_RequestProcessEnd); \
	DECLARE_FUNCTION(execCreateData); \
	DECLARE_FUNCTION(execCreateSaveDataAccessObject); \
	DECLARE_FUNCTION(execGetLastResult); \
	DECLARE_FUNCTION(execGetRequestedSaveDataType); \
	DECLARE_FUNCTION(execGetSaveDataObject); \
	DECLARE_FUNCTION(execIsAccessCache); \
	DECLARE_FUNCTION(execIsRequestComplete); \
	DECLARE_FUNCTION(execIsSupportSaveDataType); \
	DECLARE_FUNCTION(execLoad); \
	DECLARE_FUNCTION(execLoadData); \
	DECLARE_FUNCTION(execOnCreatedData); \
	DECLARE_FUNCTION(execOnLoadedData); \
	DECLARE_FUNCTION(execOnRequestTermination); \
	DECLARE_FUNCTION(execOnStartCreateData); \
	DECLARE_FUNCTION(execOnStartLoadData); \
	DECLARE_FUNCTION(execOnStartUpdateData); \
	DECLARE_FUNCTION(execOnUnbindAccessor); \
	DECLARE_FUNCTION(execReadData); \
	DECLARE_FUNCTION(execRequestTermination); \
	DECLARE_FUNCTION(execSave); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execUpdateData); \
	DECLARE_FUNCTION(execWriteData);


#define AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObjectBase_h_21_EVENT_PARMS \
	struct ELSaveDataAccessObjectBase_eventIsRequestComplete_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSaveDataAccessObjectBase_eventIsRequestComplete_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELSaveDataAccessObjectBase_eventIsSupportSaveDataType_Parms \
	{ \
		ESaveDataType SaveDataType; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSaveDataAccessObjectBase_eventIsSupportSaveDataType_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELSaveDataAccessObjectBase_eventOnCreatedData_Parms \
	{ \
		bool _isSuccess; \
		USaveData_AccessorBase* _saveDataAccessor; \
	}; \
	struct ELSaveDataAccessObjectBase_eventOnLoadedData_Parms \
	{ \
		bool _isSuccess; \
		USaveData_AccessorBase* _saveDataAccessor; \
	}; \
	struct ELSaveDataAccessObjectBase_eventOnRequestTermination_Parms \
	{ \
		bool IsSuccess; \
		ESaveDataProcResult InProcResult; \
		ESaveDataProcResult ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSaveDataAccessObjectBase_eventOnRequestTermination_Parms() \
			: ReturnValue((ESaveDataProcResult)0) \
		{ \
		} \
	}; \
	struct ELSaveDataAccessObjectBase_eventOnStartCreateData_Parms \
	{ \
		ESaveDataProcResult ProcResult; \
		ESaveDataType _saveDataType; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSaveDataAccessObjectBase_eventOnStartCreateData_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELSaveDataAccessObjectBase_eventOnStartLoadData_Parms \
	{ \
		ESaveDataProcResult ProcResult; \
		ESaveDataType _saveDataType; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSaveDataAccessObjectBase_eventOnStartLoadData_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELSaveDataAccessObjectBase_eventOnStartUpdateData_Parms \
	{ \
		ESaveDataProcResult ProcResult; \
		ESaveDataType _saveDataType; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSaveDataAccessObjectBase_eventOnStartUpdateData_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELSaveDataAccessObjectBase_eventOnUnbindAccessor_Parms \
	{ \
		USaveData_AccessorBase* SaveDataAccessor; \
	}; \
	struct ELSaveDataAccessObjectBase_eventReadData_Parms \
	{ \
		USaveDataObjectBase* SaveDataObject; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSaveDataAccessObjectBase_eventReadData_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELSaveDataAccessObjectBase_eventWriteData_Parms \
	{ \
		USaveDataObjectBase* SaveDataObject; \
		bool bInitialize; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSaveDataAccessObjectBase_eventWriteData_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObjectBase_h_21_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObjectBase_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSaveDataAccessObjectBase(); \
	friend struct Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics; \
public: \
	DECLARE_CLASS(UELSaveDataAccessObjectBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ELITE"), NO_API) \
	DECLARE_SERIALIZER(UELSaveDataAccessObjectBase)


#define AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObjectBase_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUELSaveDataAccessObjectBase(); \
	friend struct Z_Construct_UClass_UELSaveDataAccessObjectBase_Statics; \
public: \
	DECLARE_CLASS(UELSaveDataAccessObjectBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ELITE"), NO_API) \
	DECLARE_SERIALIZER(UELSaveDataAccessObjectBase)


#define AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObjectBase_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSaveDataAccessObjectBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSaveDataAccessObjectBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSaveDataAccessObjectBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSaveDataAccessObjectBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSaveDataAccessObjectBase(UELSaveDataAccessObjectBase&&); \
	NO_API UELSaveDataAccessObjectBase(const UELSaveDataAccessObjectBase&); \
public:


#define AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObjectBase_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSaveDataAccessObjectBase(UELSaveDataAccessObjectBase&&); \
	NO_API UELSaveDataAccessObjectBase(const UELSaveDataAccessObjectBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSaveDataAccessObjectBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSaveDataAccessObjectBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UELSaveDataAccessObjectBase)


#define AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObjectBase_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bAccessCache() { return STRUCT_OFFSET(UELSaveDataAccessObjectBase, bAccessCache); } \
	FORCEINLINE static uint32 __PPO__m_IsCachedData() { return STRUCT_OFFSET(UELSaveDataAccessObjectBase, m_IsCachedData); } \
	FORCEINLINE static uint32 __PPO__World() { return STRUCT_OFFSET(UELSaveDataAccessObjectBase, World); } \
	FORCEINLINE static uint32 __PPO__m_SaveDataType() { return STRUCT_OFFSET(UELSaveDataAccessObjectBase, m_SaveDataType); } \
	FORCEINLINE static uint32 __PPO__LastResult() { return STRUCT_OFFSET(UELSaveDataAccessObjectBase, LastResult); } \
	FORCEINLINE static uint32 __PPO__RequestTimer() { return STRUCT_OFFSET(UELSaveDataAccessObjectBase, RequestTimer); } \
	FORCEINLINE static uint32 __PPO__FileNameList() { return STRUCT_OFFSET(UELSaveDataAccessObjectBase, FileNameList); } \
	FORCEINLINE static uint32 __PPO__SaveOnlyAccessor() { return STRUCT_OFFSET(UELSaveDataAccessObjectBase, SaveOnlyAccessor); } \
	FORCEINLINE static uint32 __PPO__m_CreatedDelegate() { return STRUCT_OFFSET(UELSaveDataAccessObjectBase, m_CreatedDelegate); } \
	FORCEINLINE static uint32 __PPO__m_LoadedDelegate() { return STRUCT_OFFSET(UELSaveDataAccessObjectBase, m_LoadedDelegate); } \
	FORCEINLINE static uint32 __PPO__m_UpdatedDelegate() { return STRUCT_OFFSET(UELSaveDataAccessObjectBase, m_UpdatedDelegate); }


#define AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObjectBase_h_19_PROLOG \
	AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObjectBase_h_21_EVENT_PARMS


#define AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObjectBase_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObjectBase_h_21_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObjectBase_h_21_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObjectBase_h_21_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObjectBase_h_21_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObjectBase_h_21_INCLASS \
	AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObjectBase_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObjectBase_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObjectBase_h_21_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObjectBase_h_21_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObjectBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObjectBase_h_21_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObjectBase_h_21_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObjectBase_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELITE_API UClass* StaticClass<class UELSaveDataAccessObjectBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Public_ELSaveDataAccessObjectBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
